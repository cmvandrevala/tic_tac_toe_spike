#include <iostream>
#include <array>
#include <cassert>
#include <string>
#include "board.hpp"

using namespace std;

Board::Board()
{
  this->create_empty_board();
}

void Board::create_empty_board()
{
  for (int i = 0; i < 9; i++)
  {
    board[i] = '_';
  }
}

void Board::make_move(int cell, char mark)
{
  board[cell - 1] = mark;
}

string Board::get_mark(int cell)
{
  return board[cell - 1];
}
