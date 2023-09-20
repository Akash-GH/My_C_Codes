#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;
    int nguesses = 1;// Number of guesses
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 t0 100
    // Keeping running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100: ",guess);
        scanf("%d",&guess);
        if (guess > number){
            printf("Lower Number PLease!!\n");
        }
        else if(guess < number){
            printf("Higher Number Please!!\n");
        }
        else{
            printf("You guessed the correct Number in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}