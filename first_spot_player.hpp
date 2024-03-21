#pragma once
#include "board.hpp"
#include "player.hpp"

class FirstSpotPlayer : public Player
{
private:
  Board *board;
  char symbol;

public:
  FirstSpotPlayer(Board *inputted_board, char symbol);
  void move() override;
};
