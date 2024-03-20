#pragma once
#include "board.hpp"
#include "player.hpp"

class HumanPlayer : public Player
{
private:
  Board *board;

public:
  HumanPlayer(Board *inputted_board);
  void move() override;
};
