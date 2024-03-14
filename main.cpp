
#include "game.hpp"

int main()
{
  Board board;
  Board *board_ptr = &board;

  ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
  ConsoleBoardCreator *creator_ptr = &creator;

  Rules rules = Rules(board_ptr);
  Rules *rules_ptr = &rules;

  Game game = Game(board_ptr, rules_ptr, creator_ptr);
  game.start();

  return 0;
}
