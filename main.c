#include <stdio.h>
#include "input.h"

char input[100] = "start"; //lines shouldn't be more than 100

static int getInput(void)
{
   printf("\n--> ");
   return fgets(input, sizeof input, stdin) != NULL;
}

int main() {\
    //startup
    printf ("Welcome to Apt 607. It is very crazy in here.\n");
    printf ("Please enter your name!\n");
    char name[100];
    fgets(name, sizeof name, stdin);
    printf ("Nice to meet you! %s", name);
    while(parseInput(input) && getInput());
    return 0;
}