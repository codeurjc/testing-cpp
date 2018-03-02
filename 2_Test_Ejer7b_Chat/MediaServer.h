/*
 * User.h
 *
 *  Created on: 11 Jun 2015
 *      Author: osboxes
 */

#ifndef MEDIASERVER_H_
#define MEDIASERVER_H_

#include <string>

using namespace std;

class MediaServer {

public:
	virtual ~MediaServer(){};
	virtual bool allowMoreUsers()=0;
};

#endif /* USER_H_ */
