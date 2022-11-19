#include "board.h"
#include <iostream>

void board::add_piece(const std::array<int,2>& location, piece* p) {
   this->board_arr[location[0]][location[1]] = p;
}

board::board() {
   for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
         this->board_arr[i][j] = nullptr;
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
         char icon = '\0';
         if (this->board_arr[i][j] == nullptr)
            icon = 'x';
         else
            icon = this->board_arr[i][j] -> get_piece_icon();
         std::cout << icon << " "; // piece icons
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

void board::move_piece(piece* p, const std::array<int,2>& location) {
   if (p == nullptr)
      std::cerr << "ERROR: piece* p cannot be nullptr." << '\n';
   this->board_arr[location[0]][location[1]] = p;
}
