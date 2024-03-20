#include "first_spot_player.hpp"

FirstSpotPlayer::FirstSpotPlayer(Board *inputted_board)
{
  this->board = inputted_board;
}

void FirstSpotPlayer::move()
{
  cout << endl
       << endl;
  board->make_move(1, 'O');
}
