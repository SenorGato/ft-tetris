#include <vector>
#include "TetrisBoard.h"
#include <string>
#include <iostream>
TetrisBoard::TetrisBoard(int w, int h)  {
    width = w;
    height = h;
    std::cout << "InTetrisBoard " << std::endl;
    std::cout << "width:" << width << std::endl;
    std::vector<std::vector<Tile>> board;
    init();
}

std::vector<std::vector<Tile>> TetrisBoard::init(){
    std::vector<std::vector<Tile>> board(width, std::vector<Tile> (height));
    //std::cout << this->width << std::endl;
    for(int x = 0; x < this->width; x++){
        //std::cout << "In first for loop" << std::endl;
        for(int y = 0; y < this->height; y++){
            board[x][y] = Tile(x,y);
            //std::cout << x << " " << y << std::endl;
            std::cout << board[x][y].yPos << std::endl;
        }
    }
    return board;
}
