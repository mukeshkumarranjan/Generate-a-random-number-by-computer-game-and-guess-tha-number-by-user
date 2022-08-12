#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{    
    // my 1st game
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand() % 100 + 1; // generate a random number between 1 and 100
    printf("the number is %d\n", number);
    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please\n");
        }
        else if (guess < number)
        {
            printf("heigher number please\n");
        }
        else
        {
            printf("you guesses it in %d attempts .Congratualition\n",nguesses);
        }
        nguesses++;
    }
    while(guess!=number);
    return 0;
}
