#ifndef TILE_H
#define TILE_H

struct Tile {
    int xPos, yPos;
    bool isEmpty;
    Tile();
    Tile(int x, int y);
};

#endif
