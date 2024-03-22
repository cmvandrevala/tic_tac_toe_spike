#pragma once
#include "board.hpp"
#include "player.hpp"

class HumanPlayer : public Player
{
private:
  Board *board;
  char symbol;

public:
  HumanPlayer(Board *inputted_board, char symbol);
  void move() override;
};
