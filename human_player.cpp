#include "human_player.hpp"

HumanPlayer::HumanPlayer(Board *inputted_board)
{
  this->board = inputted_board;
}

void HumanPlayer::move()
{
  string user_input = "";
  cout << endl
       << "Which cell?"
       << endl;
  cin >> user_input;
  board->make_move(stoi(user_input), 'X');
}
