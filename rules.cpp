#include "board.hpp"
#include "rules.hpp"

Rules::Rules(Board *inputted_board)
{
  board = inputted_board;
}

bool Rules::validate_input(int input)
{
  string current_mark = board->get_mark(input);
  if (input < 1 || input > 9 || current_mark != "_")
  {
    return false;
  }

  return true;
}

bool Rules::in_progress()
{
  if (three_in_a_row(1, 2, 3) == "_" && three_in_a_row(4, 5, 6) == "_" && three_in_a_row(7, 8, 9) == "_" && three_in_a_row(1, 5, 9) == "_" && three_in_a_row(3, 5, 7) == "_")
  {
    return true;
  }
  return false;
}

string Rules::three_in_a_row(int cell_one, int cell_two, int cell_three)
{
  if (board->get_mark(cell_one) == board->get_mark(cell_two) && board->get_mark(cell_two) == board->get_mark(cell_three) && board->get_mark(cell_one) != "_")
  {
    return board->get_mark(cell_one);
  }
  else
  {
    return "_";
  }
}
