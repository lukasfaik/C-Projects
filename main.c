#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    // Create a time variable
    time_t t;
    
    // Initialize the raondom number generator
    srand((unsigned)time(&t));
    
    // Get the random number between (0-20) and store in an int variable
    int random_number = rand() % 21;
    
    // Setting up the game variables
    int game_status = 1;
    int tries = 0;
    int entered_number = 21;

    while (game_status == 1) {
            printf("Welcome to the Guess The Number Game!\n");
            printf("I have chosen a number between 0 and 20, wich you must guess.\n");
        
            for(tries = 5; tries > 0; tries--) {        
                printf("\nYou have %d tr%s left.\n", tries, tries == 1 ? "y" : "ies");
                printf("Enter a guess: ");
                scanf("%d", &entered_number);
                
                if (entered_number == random_number) {
                    printf("\nCongratulations. You guessed it!\n");
                    //Exit of the loop to label
                    goto label;
                }
                
                //checking for an invalid guess
                else if (entered_number < 0 || entered_number > 20) {
                    printf("I said the number must be bewteen 0 and 20.\n");
                }
                
                // Feedback to the user about the value of the random number
                else if (random_number > entered_number) {
                    printf("Sorry, %d is wrong. My number is greater than that.\n", entered_number);
                }
                
                else if (random_number < entered_number) {
                    printf("Sorry, %d is wrong. My number is less than that.\n", entered_number);
                }
            }
            
            printf("\nYou have had five tries and failed. The number was %d\n", random_number);
            
            //Comming form the loop
            label:
            
            tries = 5;
            printf("Would you like to play again? (yes =1, no = 0) ");
            scanf("%d", &game_status);
            printf("\n\n");
    }
        return 0;
}
