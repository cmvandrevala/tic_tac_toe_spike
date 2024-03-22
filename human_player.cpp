#include "human_player.hpp"

HumanPlayer::HumanPlayer(Board *inputted_board, char symbol)
{
  this->board = inputted_board;
  this->symbol = symbol;
}

void HumanPlayer::move()
{
  string user_input = "";
  cout << "Which cell?";
  cin >> user_input;
  board->make_move(stoi(user_input), symbol);
}
