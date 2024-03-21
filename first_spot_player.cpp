#include "first_spot_player.hpp"

FirstSpotPlayer::FirstSpotPlayer(Board *inputted_board, char symbol)
{
  this->board = inputted_board;
  this->symbol = symbol;
}

void FirstSpotPlayer::move()
{
  for (int i = 1; i <= 9; i++)
  {
    string mark = board->get_mark(i);
    if (mark == "_")
    {
      board->make_move(i, symbol);
      break;
    }
  }
}
