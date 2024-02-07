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
  Board board;

public:
  ConsoleBoardCreator(Board inputted_board)
  {
    board = inputted_board;
  }

  string formatted_board()
  {
    return " " + board.get_mark(1) + " | " + board.get_mark(2) + " |   \n-----------\n   |   |   \n-----------\n   |   |   ";
  }
};

int main()
{
  Board board;

  board.make_move(1, 'X');
  board.make_move(3, 'O');
  board.make_move(5, 'X');
  board.make_move(7, 'O');

  ConsoleBoardCreator creator = ConsoleBoardCreator(board);
  string formatted_board = creator.formatted_board();

  cout << formatted_board << endl;

  board.make_move(2, 'W');

  string new_formatted_board = creator.formatted_board();
  cout << new_formatted_board << endl;

  return 0;
}
