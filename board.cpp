#include <iostream>
#include <array>
#include <cassert>

using namespace std;

class Board
{
  array<string, 9> board;

public:
  Board()
  {
    for (int i = 0; i < 9; i++)
    {
      board[i] = '_';
    }
  }

  void make_move(int cell, char mark)
  {
    board[cell - 1] = mark;
  }

  string get_mark(int cell)
  {
    return board[cell - 1];
  }
};

class ConsoleBoardCreator
{
  Board *board;

public:
  ConsoleBoardCreator(Board *inputted_board)
  {
    board = inputted_board;
  }

  string formatted_board()
  {
    // This implementation is incomplete. Make sure you fill in the rest! It would also help to break this long string up using some private methods.
    return " " + board->get_mark(1) + " | " + board->get_mark(2) + " | " + board->get_mark(3) + " \n-----------\n   |   |   \n-----------\n   |   |   ";
  }
};

class Rules
{
  Board *board;

public:
  Rules(Board *inputted_board)
  {
    board = inputted_board;
  }

  bool validate_input(int input)
  {
    string current_mark = board->get_mark(input);
    if (input < 1 || input > 9 || current_mark != "_")
    {
      return false;
    }

    return true;
  }

  bool in_progress()
  {
    // We need to ask the Board object if there are any spaces still open.
    // We also need to check if there a winner - three in a row, vertical, horizontal, or diagonal.
    // The code below is a partial implementation where we check for three in a row in the top row.
    if (three_in_a_row_in_the_top_row() == "_")
    {
      return true;
    }
    return false;
  }

  string three_in_a_row_in_the_top_row()
  {
    if (board->get_mark(1) == board->get_mark(2) && board->get_mark(2) == board->get_mark(3) && board->get_mark(1) != "_")
    {
      return board->get_mark(1);
    }
    else
    {
      return "_";
    }
  }
};

int main()
{
  Board board;

  board.make_move(1, 'X');
  board.make_move(3, 'X');
  board.make_move(5, 'X');
  board.make_move(7, 'O');

  Board *board_ptr = &board;

  ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
  string formatted_board = creator.formatted_board();
  cout << formatted_board << endl;

  cout << endl;

  board.make_move(1, 'W');

  cout << creator.formatted_board() << endl;

  Rules rules = Rules(board_ptr);

  bool too_low = rules.validate_input(-20);

  assert(too_low == false);

  bool too_high = rules.validate_input(20);

  assert(too_high == false);

  bool just_right_and_not_taken = rules.validate_input(6);

  assert(just_right_and_not_taken == true);

  bool already_taken = rules.validate_input(7);

  assert(already_taken == false);

  board.make_move(1, 'X');
  board.make_move(2, 'X');
  board.make_move(3, 'X');

  bool in_progress = rules.in_progress();

  assert(in_progress == false);

  return 0;
}
