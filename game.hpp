#pragma once
#include "console_board_creator.hpp"
#include "rules.hpp"
#include "board.hpp"

class Game
{
private:
  Board *board;
  Rules *rules;
  ConsoleBoardCreator *creator;

public:
  Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr);
  void start();
};
