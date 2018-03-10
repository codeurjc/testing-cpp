/*
 * Char.h
 *
 *  Created on: 11 Jun 2015
 *      Author: osboxes
 */

#ifndef CHAT_H_
#define CHAT_H_

#include <string>
#include <vector>

using namespace std;

class User;

class Chat {

private:
	vector<User*> users;
	string name;

public:
	Chat(string name);
	void addUser(User* user);
	void removeUser(User* user);
	void sendMessage(User* user , string message );
	virtual ~Chat();
};

#endif /* CHAT_H_ */
