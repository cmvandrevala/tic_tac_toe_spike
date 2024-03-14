#pragma once
#include "board.hpp"

class ConsoleBoardCreator
{
private:
  Board *board;

public:
  ConsoleBoardCreator(Board *inputted_board);
  string formatted_board();
};
