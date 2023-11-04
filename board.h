#include <stdlib.h>

typedef struct {
  int turn; // White = 0; black=1
  int user;
  int board[8][8];
} boardStruct;

boardStruct *creatBoard(int user);
