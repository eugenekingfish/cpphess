#pragma once
#include <array>

enum class OWNER:int {WHITE, BLACK}; // note: not printable

class piece {
   public:
      OWNER get_owner() const;
      piece(const OWNER& owner, const char& icon); 
      piece();
      bool is_captured() const;
      char get_piece_icon() const;
      void set_position(const std::array<int,2>& position);
      std::array<int,2> get_position() const;

   protected:
      OWNER owner;
      bool captured;
      char piece_icon;
      std::array<int,2> position;
};
