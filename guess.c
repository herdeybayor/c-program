#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
    srand(time(NULL)); 
    
    int max_guess;
    printf("What is the maximum guess you want to set? (Default 100): ");
    scanf("%d", &max_guess);
    
    int play_again = 1;

    while(play_again == 1)
    {
    
    int secret_number = rand() % max_guess + 1;   
    int guess = 0;
    int attempts = 0;
    int Lives = 5;
    



    // printf("Secret number is: %d\n", secret_number);

   printf("\n\n === Welcome to the Number Guessing Game! ===\n\n");
   printf("I have selected a number between 1 and %d. Can you guess it?\n\n", max_guess);

    while (guess != secret_number && Lives > 0)
    {
   printf("Enter your guess: ");
   
   scanf("%d", &guess);

    attempts++;

   if (guess > secret_number)

   {
        Lives--;
       printf("\nToo high! Try a lower number.\n");
       printf("You have %d lives remaining.\n", Lives);
   }
   else if (guess < secret_number)
   {
        Lives--;
       printf("\nToo low! Try a higher number.\n");
         printf("You have %d lives remaining.\n", Lives);
   }
   else
   {
       printf("\n\n\n\n--- Congratulations! ---\n\n\n");
       printf("You guessed the number correctly! The number was %d. It took you %d attempts.\n", secret_number, attempts);
   }

    }

   if (Lives == 0)
   {
       printf("\n--- Game Over! ---\n");
       printf("You've run out of lives. The secret number was %d. Better luck next time!\n", secret_number);
   }  
   
   
    printf("\nDo you want to play again? (1 for Yes, 2 for No): ");
    scanf("%d", &play_again);
    
}



printf("\nThank you for playing! Goodbye!\n");
return 0;
}
