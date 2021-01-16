#include "player.h"
#include "location.h"

struct Game {
    char currentLocation[100];
    struct Player * player;
};

struct Game createGame(char * playerName) {
    struct Game game = {"607 common room", playerCreate(playerName)};
    return game;
}

void endGame(struct Game game ){
    playerDestroy(game->player);
}