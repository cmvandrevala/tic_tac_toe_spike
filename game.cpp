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
  while (rules->in_progress())
  {
    cout << creator->formatted_board();
    current_player->move();
    switch_player();
  }

  cout << creator->formatted_board() << endl;
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
