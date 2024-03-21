
#include "game.hpp"
#include "human_player.hpp"
#include "first_spot_player.hpp"
#include "player.hpp"

int main()
{
  Board board;
  ConsoleBoardCreator creator = ConsoleBoardCreator(&board);
  Rules rules = Rules(&board);

  FirstSpotPlayer player_one = FirstSpotPlayer(&board, 'X');
  FirstSpotPlayer player_two = FirstSpotPlayer(&board, 'O');

  Game game = Game(&board, &rules, &creator, &player_one, &player_two);
  game.start();

  return 0;
}
