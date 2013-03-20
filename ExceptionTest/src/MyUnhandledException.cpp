/*
 * MyUnhandledException.cpp
 *
 *  Created on: Mar 4, 2013
 *      Author: Prabhakarana
 */

#include "MyUnhandledException.hpp"
#include <qdebug.h>

MyUnhandledException::MyUnhandledException(int& argc, char ** argv) :
		Application(argc, argv) {
	// TODO Auto-generated constructor stub

}

MyUnhandledException::~MyUnhandledException() {
	// TODO Auto-generated destructor stub
}

bool MyUnhandledException::notify(QObject * receiver, QEvent * event) {
	try {
		return Application::notify(receiver, event);
	} catch (std::exception& e) {
		qDebug("----Unhandled Exception----");
		qDebug() << "Error:" << e.what();
	}
	return false;
}
