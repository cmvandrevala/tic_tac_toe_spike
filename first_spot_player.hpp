#pragma once
#include "board.hpp"
#include "player.hpp"

class FirstSpotPlayer : public Player
{
private:
  Board *board;

public:
  FirstSpotPlayer(Board *inputted_board);
  void move() override;
};
