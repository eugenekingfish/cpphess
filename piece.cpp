#include "piece.h"

piece::piece() {
   this->captured = false;
   this->owner = OWNER::WHITE;
}

piece::piece(OWNER owner) {
   this->captured = false;
   this->owner = owner;
}

OWNER piece::get_owner() const {
   return this->owner;
}

bool piece::is_captured() const {
   return this->captured;
}
