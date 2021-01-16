struct Game;

struct Game * gameCreate(char * playerName);
void gameEnd(struct Game * game );
char * gameLocation(struct Game *game);
int gotoRoom(struct Game * game, char roomName[100]);