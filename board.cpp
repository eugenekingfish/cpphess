#include "board.h"
#include <iostream>

void board::add_piece(const std::array<int,2>& location, 
      const piece& p) {
   this->board_arr[location[0]][location[1]] = p;
}

board::board() {
   for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
         piece p(OWNER::WHITE);
         this->board_arr[i][j] = p;
      }
   }
}

void board::print_board() const {
   for (int i = 0; i < 8; ++i) {
      std::cout << i+1 << "   ";
      for (int j = 0; j < 8; ++j) {
         std::cout << "x" << " ";
      }
      std::cout << std::endl;
   }
}
