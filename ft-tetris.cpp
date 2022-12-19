#include <iostream>
#include <string>
#include "TetrisBoard.h"
int main(){
    TetrisBoard test = TetrisBoard(10,10);
    //std::cout << "test:" << &test.board[0][0] << std::endl;
    std::cout << test.board[1][1].xPos;
}
