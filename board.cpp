#include "board.h"
#include <iostream>

void board::add_piece(const std::array<int,2>& location, 
      const piece& p) {
   this->board_arr[location[0]][location[1]] = p;
}

board::board() {
   for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
         pawn p;
         this->board_arr[i][j] = p;
      }
   }
}

// todo: implement padding, remove magic constants
void board::print_board(const int& padding) const {
   int board_width = 8;

   for (int i = 0; i < board_width; ++i) {
      std::cout << i+1; // numbers on side of board
      for (int k = 0; k < 3; ++k)
         std::cout << " ";

      for (int j = 0; j < board_width; ++j) {
         std::cout << this->board_arr[i][j].get_piece_icon() << " "; // piece icons
      }
      std::cout << '\n';
   }

   // letters below board 
   for (int i = 0; i < 1; ++i)
      std::cout << '\n';
   for (int i = 0; i < 4; ++i) 
      std::cout << " ";
   for (int i = 0; i < board_width; ++i) {
      std::cout << char(97+i) << " ";
   }
   std::cout << '\n';
}
