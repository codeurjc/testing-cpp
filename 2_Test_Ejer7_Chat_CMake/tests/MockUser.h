/*
 * MockUser.h
 *
 *  Created on: 11 Jun 2015
 *      Author: osboxes
 */

#ifndef MOCKUSER_H_
#define MOCKUSER_H_

#include "User.h"
#include "gmock/gmock.h"

class MockUser: public User {

public:
	MOCK_METHOD3(onMessage , void(string,string,string));
	MOCK_METHOD2(newUserInChat , void(string,string));
	MOCK_METHOD2(userExitedFromChat , void(string,string));
	MOCK_METHOD0(getName , string());
};

#endif /* MOCKUSER_H_ */
