#include <iostream>
#include "exit_menu.hpp"

using namespace std;

ExitMenu::ExitMenu(Game *game)
{
  this->game = game;
}

void ExitMenu::execute()
{
  string user_input;
  cout << "Do you want to play again?" << endl;
  cin >> user_input;
  if (user_input == "n")
  {
    cout << "Thank you for playing!" << endl;
  }
  else
  {
    game->reset();
    game->start();
  }
}
