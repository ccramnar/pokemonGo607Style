#include <string.h>
#include <stdbool.h>
#include <stdio.h>

int parseInput(char *input)
{
   if (input != NULL)
   {
      if (strcmp(input, "start") == 0)
      {
          printf("Let's start your adventure! What do you want to do first?\n");
      }
      else if (strcmp(input, "quit\n") == 0)
      {
          printf("Thank you for playing!\n");
         return 0;
      }
      else if (strcmp(input, "knock on a door\n") == 0)
      {
         printf("Whose door?.\n");
         return 0;
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
      else
      {
         printf("This is not a valid option: %s\n", input);
      }
   }
   return true;
}