#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include "game.h"

struct Game * game;

int parseInput(char *input)
{
    if (input != NULL)
    {
        if (strcmp(input, "start") == 0)
        {
            printf("Please enter your name!\n");
            char name[100];
            fgets(name, sizeof name, stdin);
            printf("Nice to meet you! %s", name);
            game = gameCreate(name);
            printf("Let's start your adventure! What do you want to do first?\n");
        }
        else if (strcmp(input, "quit\n") == 0)
        {
            printf("Thank you for playing!\n");
            gameEnd(game);
            return 0;
        }
        else if (strcmp(input, "knock on a door\n") == 0)
        {
            printf("Whose door?\n");
            char door[100];
            fgets(door, sizeof door, stdin);
            /*
            if (gotoRoom(game, door)) {
                printf("You are in %s's room", door);
            } else {
                printf("That room does not exist");
            }*/
        }
        else if (strcmp(input, "lets pokego to a raid\n") == 0)
        {
            printf("Heading outside to a raid.\n");
        }
        else if (strcmp(input, "lets pokego to a battle\n") == 0)
        {
            printf("Heading outside to a battle.\n");
        }
        else if (strcmp(input, "check stats") == 0)
        {
            printf("Checking your stats!\n");
        }
        else if (strcmp(input, "where am I?") == 0)
        {
            printf("You are here: %s.\n", gameLocation(game));
        }
        else
        {
            printf("This is not a valid option: %s\n", input);
        }
    }
    return true;
}