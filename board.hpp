#ifndef _BOARD_HPP_
#define _BOARD_HPP_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef enum {
  white =1,
  black = -1,
} userStruct;

typedef struct {
  userStruct turn; // White = 1; black = -1
  int board[8][8];
} boardStruct;

typedef struct {
  int start[2];
  int end[2];
  userStruct user;
} moveStruct;

class Board {
  private:
    boardStruct* board; 
    vector<moveStruct> moves;
  public:
    Board();
    //~Board();
    void clearBoard();
    void printBoard(userStruct user);
    void userInput();

};

#endif