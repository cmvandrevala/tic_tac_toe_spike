#include <iostream>
#include <array>
#include <cassert>

using namespace std;

class Board
{
  array<char, 9> board;

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

  char get_mark(int cell)
  {
    return board[cell - 1];
  }
};

int main()
{
  Board board;

  board.make_move(1, 'X');
  board.make_move(3, 'O');
  board.make_move(5, 'X');
  board.make_move(7, 'O');

  cout << "Starting the tests" << endl;
  assert(board.get_mark(1) == 'X');
  assert(board.get_mark(3) == 'O');
  assert(board.get_mark(5) == 'X');
  assert(board.get_mark(7) == 'O');
  cout << "Tests passed" << endl;

  return 0;
}
