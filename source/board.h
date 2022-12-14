#pragma once
#include "piece.h"
#include "pawn.h"
#include <array>

class board {
   private:
      std::array<std::array<piece*, 8>, 8> board_arr;
   public:
      void add_piece(const std::array<int,2>& location, piece* p);
      board();
      void print_board(const int& padding) const;
      void move_piece(piece* p, const std::array<int,2>& location);
};
