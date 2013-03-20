/*
 * MyException.hpp
 *
 *  Created on: Mar 4, 2013
 *      Author: Prabhakarana
 */

#ifndef MYEXCEPTION_HPP_
#define MYEXCEPTION_HPP_
#include <qtconcurrentexception.h>
#include <qstring.h>
#include <qobject.h>

class MyException: public QtConcurrent::Exception {
public:
	MyException();
	MyException(QString errorMessage);
	virtual ~MyException();

	void raise() const {
		throw *this;
	}
	Exception *clone() const {
		return new MyException(*this);
	}
	QString GetErrorMessage();
	QString m_errorMessage;
};

#endif /* MYEXCEPTION_HPP_ */
