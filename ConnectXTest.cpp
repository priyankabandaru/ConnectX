/**
 * Unit Tests for ConnectX class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "ConnectX.h"
 
class ConnectXTest : public ::testing::Test
{
	protected:
		ConnectXTest(){}
		virtual ~ConnectXTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(ConnectXTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(ConnectXTest ,showBoard)
{
	ConnectX con;
	con.showBoard();
	ASSERT_TRUE(true);
}

TEST(ConnectXTest ,WhoseTurn)
{
	ConnectX con;
	Piece eq=con.whoseTurn();
	ASSERT_EQ(eq,2);
}
TEST(ConnectXTest ,initialat)
{
	ConnectX con;
	Piece eq=con.at(3,4);
	ASSERT_EQ(eq,0);
}
TEST(ConnectXTest ,placePieceB)
{
	ConnectX con;
	con.placePiece(1);
	con.showBoard();
	Piece eq=con.at(1,5);
	ASSERT_EQ(eq,2);
}
TEST(ConnectXTest ,placePieceW)
{
	ConnectX con;
	con.placePiece(1);
	con.placePiece(1);
	con.showBoard();
	Piece eq=con.at(1,4);
	ASSERT_EQ(eq,1);
}
TEST(ConnectXTest ,placePieceinValid)
{
	ConnectX con;
	con.placePiece(8);
	con.showBoard();
	Piece eq=con.at(8,1);
	ASSERT_EQ(eq,-1);
}
TEST(ConnectXTest ,toggleturn)
{
	ConnectX con;
	con.placePiece(8);
	con.showBoard();
	Piece eq=con.whoseTurn();
	ASSERT_EQ(eq,1);
        
}

