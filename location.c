#include "location.h"
#include <stdio.h>

struct Location
{
    const char *type;
    const char *owner;
};

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


static int gotoRoom(char *roomName)
{
}