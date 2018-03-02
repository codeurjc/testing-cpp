#include "Chat.h"
#include "gmock/gmock.h"
#include "MockUser.h"
#include <utility>
#include <iostream>
#include <cmath>

using namespace std;
using namespace testing;

TEST(ChatTest , AddUser) {

	Chat chat("Test");
	MockUser user1;
	MockUser user2;

	EXPECT_CALL(user2, getName() ).WillOnce(Return("Pepe"));
	EXPECT_CALL(user1, newUserInChat("Test", "Pepe"));

	chat.addUser(&user1);
	chat.addUser(&user2);
}

TEST(ChatTest , RemoveUser) {

	Chat chat("Test");
	MockUser user1;
	MockUser user2;

	EXPECT_CALL( user1 , getName() ).WillRepeatedly(Return("Heidi"));
	EXPECT_CALL( user2 , getName() ).WillRepeatedly(Return("Pepe"));

	EXPECT_CALL(user1, newUserInChat("Test", "Pepe"));
	EXPECT_CALL(user2, userExitedFromChat("Test", "Heidi"));

	chat.addUser(&user1);
	chat.addUser(&user2);

	chat.removeUser(&user1);
}

TEST(ChatTest , SendMessage) {

	Chat chat("Test");
	MockUser user1;
	MockUser user2;

	EXPECT_CALL( user1 , getName() ).WillRepeatedly(Return("Heidi"));
	EXPECT_CALL( user2 , getName() ).WillRepeatedly(Return("Pepe"));

	EXPECT_CALL(user1, newUserInChat("Test", "Pepe"));
	EXPECT_CALL(user2, onMessage("Test", "Heidi", "Hello"));
	EXPECT_CALL(user1, onMessage(_, _, _)).Times(0);

	chat.addUser(&user1);
	chat.addUser(&user2);

	chat.sendMessage(&user1, "Hello");
}
