/*
 * MyException.cpp
 *
 *  Created on: Mar 4, 2013
 *      Author: Prabhakarana
 */

#include "MyException.hpp"
#include <qdebug.h>

MyException::MyException() {
	// TODO Auto-generated constructor stub

}

MyException::MyException(QString errorMessage) {
	this->m_errorMessage = errorMessage;
	qDebug() << "MyException error message: " << m_errorMessage;
}

MyException::~MyException() {
	// TODO Auto-generated destructor stub
}

QString MyException::GetErrorMessage() {
	if (!m_errorMessage.isEmpty()) {
		return this->m_errorMessage;
	} else if (sizeof(this->what()) > 0) {
		return this->what();
	}
	return QString("");
}
