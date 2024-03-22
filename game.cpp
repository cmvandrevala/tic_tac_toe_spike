#include "game.hpp"
#include "human_player.hpp"

Game::Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr, Player *player_one_ptr, Player *player_two_ptr)
{
  board = board_ptr;
  rules = rules_ptr;
  creator = creator_ptr;
  player_one = player_one_ptr;
  player_two = player_two_ptr;
  current_player = player_one;
}

void Game::start()
{
  bool replay = true;
  string user_input;

  while (replay)
  {
    while (rules->in_progress())
    {
      cout << endl
           << creator->formatted_board()
           << endl
           << endl;
      current_player->move();
      switch_player();
    }

    cout << creator->formatted_board() << endl;

    cout << "Do you want to play again?" << endl;
    cin >> user_input;
    if (user_input == "n")
    {
      replay = false;
    }
    else
    {
      board->create_empty_board();
      current_player = player_one;
    }
  }
}

void Game::switch_player()
{
  if (current_player == player_one)
  {
    current_player = player_two;
  }
  else
  {
    current_player = player_one;
  }
}
