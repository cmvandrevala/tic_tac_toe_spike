#pragma once
#include "board.hpp"

class Rules
{
private:
  Board *board;
  string three_in_a_row(int cell_one, int cell_two, int cell_three);

public:
  Rules(Board *inputted_board);
  bool validate_input(int input);
  bool in_progress();
};
