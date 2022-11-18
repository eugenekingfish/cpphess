#pragma once

enum class OWNER:int {WHITE, BLACK}; // note: not printable

class piece {
   public:
      OWNER get_owner() const;
      piece(const OWNER& owner, const char& icon); 
      piece();
      bool is_captured() const;
      char get_piece_icon() const;

   protected:
      OWNER owner;
      bool captured;
      char piece_icon;
};
