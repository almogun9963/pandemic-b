#pragma once

#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"
namespace pandemic{
    class Virologist: public Player {
        public:
            Virologist(Board& board, City c): Player(board, c, "Virologist") {}
            Player& treat(City c);
    };
}