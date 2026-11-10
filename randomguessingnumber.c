
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, no_of_guessing = 0, guessed_no;

    srand(time(0));

    num = (rand() % 100) + 1;

    printf("THIS IS A RANDOM GUESSING GAME.\n");
    printf("GUESS A RANDOM NUMBER BETWEEN 1 TO 100\n");
    printf("Enter a number to guess:\n");

    do
    {
        scanf("%d", &guessed_no);

        if (guessed_no > num)
        {
            printf("You guessed wrong! Try a lower number.\n");
        }
        else if (guessed_no < num)
        {
            printf("You guessed wrong! Try a higher number.\n");
        }
        else
        {
            printf("Congrats! You guessed it correctly.\n");
        }

        no_of_guessing++;

    } while (guessed_no != num);

    printf("You guessed correctly in %d attempts.\n", no_of_guessing);

    return 0;
}
