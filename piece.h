#pragma once

enum class OWNER {WHITE, BLACK}; // note: not printable

class piece {
   public:
      OWNER get_owner() const;
      piece(OWNER owner); 
      bool is_captured() const;

   protected:
      OWNER owner;
      bool captured;

};
