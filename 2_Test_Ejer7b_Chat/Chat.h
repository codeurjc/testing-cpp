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

class MediaServer;

class NotEnoughResourcesException: public std::exception {
	virtual const char* what() const throw () {
		return "Not enough resources";
	}
};

class Chat {

private:
	vector<User*> users;
	string name;
	MediaServer* msM;

public:
	Chat(string name);
	Chat(string name, MediaServer* ms);
	void addUser(User* user);
	void removeUser(User* user);
	void sendMessage(User* user , string message );
	virtual ~Chat();
};

#endif /* CHAT_H_ */
