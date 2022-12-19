#ifndef TETRISBOARD_H
#define TETRISBOARD_H

#include <string>
#include <vector>
#include "Tile.h"


class TetrisBoard {
    public:
        int width, height;
        int score;
        std::vector<std::vector<Tile>> board;
        std::string player;
        TetrisBoard (int w, int h);
        int init();
};
#endif
