#include "piece.h"
#include <array>

piece::piece() {
   this->captured = false;
   this->owner = OWNER::WHITE;
   this->piece_icon = '\0'; // empty char
}

piece::piece(const OWNER& owner, const char& icon) {
   this->captured = false;
   this->owner = owner;
   this->piece_icon = icon;
}

OWNER piece::get_owner() const {
   return this->owner;
}

void piece::set_position(const std::array<int,2>& position) {
   this->position = position;
}

std::array<int,2> piece::get_position() const {
   return this->position;
}

bool piece::is_captured() const {
   return this->captured;
}

char piece::get_piece_icon() const {
   return this->piece_icon;
}
