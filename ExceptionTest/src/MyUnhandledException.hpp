/*
 * MyUnhandledException.hpp
 *
 *  Created on: Mar 4, 2013
 *      Author: Prabhakarana
 */

#ifndef MYUNHANDLEDEXCEPTION_HPP_
#define MYUNHANDLEDEXCEPTION_HPP_
#include <bb/cascades/Application>

using namespace bb::cascades;

class MyUnhandledException: public Application {
public:
	MyUnhandledException(int& argc, char ** argv);
	virtual bool notify(QObject * receiver, QEvent * event);
	virtual ~MyUnhandledException();
};

#endif /* MYUNHANDLEDEXCEPTION_HPP_ */
