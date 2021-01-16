#include <stdlib.h>
#include "assert.h"
#include "player.h"

struct Player
{
    const char *name;
    char *location;
    char items[10];
};

struct Player *playerCreate(char * playerName)
{
    struct Player *pr = malloc(sizeof(struct Player));
    pr->name = playerName;
    return pr;
}
void playerDestroy(struct Player *pr)
{
    assert(pr);
    free(pr);
}