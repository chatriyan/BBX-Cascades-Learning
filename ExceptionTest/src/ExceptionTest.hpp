// Default empty project template
#ifndef ExceptionTest_HPP_
#define ExceptionTest_HPP_

#include <QObject>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class ExceptionTest : public QObject
{
    Q_OBJECT
public:
    ExceptionTest(bb::cascades::Application *app);
    virtual ~ExceptionTest() {}
    void TestMethod();
    Q_INVOKABLE void CallTestMethod();
};


#endif /* ExceptionTest_HPP_ */
