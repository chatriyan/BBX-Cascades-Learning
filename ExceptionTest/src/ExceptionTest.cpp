// Default empty project template
#include "ExceptionTest.hpp"

#include <bb/cascades/Application>
#include <bb/cascades/QmlDocument>
#include <bb/cascades/AbstractPane>
#include <qdebug.h>
#include <qtconcurrentexception.h>
#include "MyException.hpp"
#include "MyUnhandledException.hpp"
#include <qstringbuilder.h>

using namespace bb::cascades;

ExceptionTest::ExceptionTest(bb::cascades::Application *app)
: QObject(app)
{
    // create scene document from main.qml asset
    // set parent to created document to ensure it exists for the whole application lifetime
    QmlDocument *qml = QmlDocument::create("asset:///main.qml").parent(this);

    // create root object for the UI
    qml->setContextProperty("myexception", this);
    AbstractPane *root = qml->createRootObject<AbstractPane>();
    // set created root object as a scene
    app->setScene(root);
}

void ExceptionTest::TestMethod(){
	throw MyException("exception test message");
}

void ExceptionTest::CallTestMethod(){
	try
	{
		MyException *obj;
		qDebug()<<obj->m_errorMessage;
	} catch (MyException &e) {
		qDebug()<<"test"<<e.GetErrorMessage();
	}
}
