/*
 * Char.cpp
 *
 *  Created on: 11 Jun 2015
 *      Author: osboxes
 */

#include "Chat.h"
#include "User.h"
#include "MediaServer.h"

#include <algorithm>

Chat::Chat(string name) :
		name(name), msM(NULL) {
}

Chat::Chat(string name, MediaServer* ms) :
		name(name), msM(ms){
}

Chat::~Chat() {
}

void Chat::addUser(User* user) {

	if(msM != NULL && !msM->allowMoreUsers()){
		throw NotEnoughResourcesException();
	}

	for (vector<User*>::const_iterator it = users.begin(); it != users.end();
			it++) {
		(*it)->newUserInChat(name, user->getName());
	}
	users.push_back(user);
}

void Chat::removeUser(User* user) {

	users.erase(std::find(users.begin(), users.end(), user));
	for (vector<User*>::const_iterator it = users.begin(); it != users.end();
			it++) {
		(*it)->userExitedFromChat(name, user->getName());
	}
}

void Chat::sendMessage(User* user, string message) {
	for (vector<User*>::const_iterator it = users.begin(); it != users.end();
			it++) {
		if (user != (*it))
			(*it)->onMessage(name, user->getName(), message);
	}
}
