/*
 * Char.cpp
 *
 *  Created on: 11 Jun 2015
 *      Author: osboxes
 */

#include "Chat.h"
#include "User.h"
#include <algorithm>

Chat::Chat(string name) :
		name(name) {
}

Chat::~Chat() {
}

void Chat::addUser(User* user) {
	for (auto &u : users){
		u->newUserInChat(name, user->getName());
	}
	users.push_back(user);
}

void Chat::removeUser(User* user) {

	users.erase(std::find(users.begin(), users.end(), user));

	for (auto &u : users){
		u->userExitedFromChat(name, user->getName());
	}
}

void Chat::sendMessage(User* user, string message) {
	for (auto &u : users){
		if (user != u){
			u->onMessage(name, user->getName(), message);
		}
	}
}


















