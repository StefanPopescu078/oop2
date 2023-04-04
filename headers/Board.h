//
// Created by Popescu Stefan on Apr 2, 2023.
//

#ifndef OOP_BOARD_H
#define OOP_BOARD_H

class Piece;

#include <array>
#include <memory>
#include <cassert>
#include "GameConsts.h"
#include "Game.h"

enum class Terrain { // tipuri de teren
    MOUNTAIN = 0,
    LAKE = (1 << 1),
    FOREST = (1 << 2),
    HILL = (1 << 3),
    PLAINS = (1 << 4),
    CRATER = (1 << 5)
};

class Board {
private:
    std::array<std::array<std::shared_ptr<Piece>, GameConsts::boardSideSize>, GameConsts::boardSideSize> pieces; // matricea pozitiilor
    std::array<std::array<Terrain, GameConsts::boardSideSize>, GameConsts::boardSideSize> cellTypes; // matricea tipurilor de teren
public:
    Board();
    Board(Board & b1);
    virtual ~Board();
    Terrain getTerrain(const int & x, const int & y) const;
    std::shared_ptr<Piece> getPiece(const int & x, const int & y) const;
    friend std::ostream &operator<<(std::ostream &out, const Board &board);
};


#endif //OOP_BOARD_H
