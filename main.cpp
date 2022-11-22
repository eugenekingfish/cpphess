#include<iostream>
#include "piece.h"
#include "board.h"
#include "pawn.h"

int main() {
   pawn _pawn;
   board b;
   b.add_piece({0,0}, &_pawn);
   b.move_piece(&_pawn, {1,1});
   b.print_board(2);
}
