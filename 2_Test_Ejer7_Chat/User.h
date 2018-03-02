/*
 * User.h
 *
 *  Created on: 11 Jun 2015
 *      Author: osboxes
 */

#ifndef USER_H_
#define USER_H_

#include <string>

using namespace std;

class User {

public:
	virtual ~User(){};
	virtual void onMessage(string chat, string user, string message)=0;
	virtual void newUserInChat(string chat, string user)=0;
	virtual void userExitedFromChat(string chat, string user)=0;
	virtual string getName()=0;
};

#endif /* USER_H_ */
