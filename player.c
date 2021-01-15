#include <stdlib.h>
#include "assert.h"
#include "player.h"

struct player
{
    const char *name;
    char *location;
};

struct player *playerCreate(char * playerName)
{
    struct player *pr = malloc(sizeof(struct player));
    pr->name = playerName;
    return pr;
}
void playerDestroy(struct player *pr)
{
    assert(pr);
    free(pr);
}