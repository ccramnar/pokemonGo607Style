#include "player.h"
#include "location.h"
#include <stdlib.h>
#include <string.h>

const struct Location locations[] = {
    {"common room", "607 common room"},
    {"bedroom", "Cy"},
    {"bedroom", "Laurz"},
    {"bedroom", "Reeve"},
    {"bedroom", "Co-vir"},
    {"gym", "King's Court"},
    {"gym", "Mc D"},
    {"pokestop", "KST"},
};

struct Game {
    char * currentLocation;
    struct Player * player;
};

struct Game * gameCreate(char * playerName) {
    struct Game * game = malloc(sizeof(struct Game));
    game->currentLocation = "607 common room";
    game->player = playerCreate(playerName);
    return game;
}

void gameEnd(struct Game * game ){
    playerDestroy(game->player);
    free(game);

}

char * gameLocation(struct Game *game) {
    return game->currentLocation;
}

static int gotoRoom(struct Game * game, char roomName[100])
{
    int returnCode = 0; //0 if no room was found, 1 otherwise for success
    for (unsigned long i = 0; i < sizeof(locations); ++i) {
        if (strcmp(locations[i].owner,roomName) && strcmp(locations[i].type, "bedroom")) {
           game->currentLocation = roomName;
            returnCode = 1;
        }
    }
    return returnCode;

}