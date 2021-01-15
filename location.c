#include "location.h"
#include <stdio.h>

struct location
{
    const char *type;
    const char *owner;
};

const struct location locations[] = {
    {"bedroom", "Cy"},
    {"bedroom", "Laurz"},
    {"bedroom", "Reeve"},
    {"bedroom", "Co-vir"},
    {"gym", "King's Court"},
    {"gym", "Mc D"},
    {"pokestop", "KST"},
};


static int gotoRoom(char *roomName)
{
}