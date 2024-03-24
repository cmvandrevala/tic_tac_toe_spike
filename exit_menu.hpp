#pragma once

#include "game.hpp"

class ExitMenu
{
private:
  Game *game;

public:
  ExitMenu(Game *game);
  void execute();
};
