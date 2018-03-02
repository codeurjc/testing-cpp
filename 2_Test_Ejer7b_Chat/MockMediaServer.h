/*
 * MockUser.h
 *
 *  Created on: 11 Jun 2015
 *      Author: osboxes
 */

#ifndef MOCKMEDIASERVER_H_
#define MOCKMEDIASERVER_H_

#include "MediaServer.h"
#include "gmock/gmock.h"

class MockMediaServer: public MediaServer {

public:

	MOCK_METHOD0(allowMoreUsers , bool());

};

#endif /* MOCKUSER_H_ */
