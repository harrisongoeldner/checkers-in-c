#include "board.hpp"

void Board::clearBoard() {
    for (int x = 0; x < 8; x++) {
        for (int y = 0; x < 8; y ++) {
            board->board[x][y] = 0;
        }
    }
}

Board::Board() {
    board->turn = white;
    clearBoard();
}

void Board::printBoard(userStruct user) {
    if (user == white) {
        for (int x = 0; x < 8; x++) {
            for (int y = 0; x < 8; y ++) {
                cout << board->board[x][y];
            }
        cout << endl;
        }
    }
}

