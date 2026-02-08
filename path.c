#include <stdio.h>

void spooky_cave(void);
void deep_woods(void);
void glowing_road(void);

int main(void)
{
    // Variable to store user choice
 int choice;

 int play_again = 1;

 while(play_again == 1)
 {

// Loop until valid input is received
 while (choice < 1 || choice > 3)

 {
// Display path options
printf("\n=== FOREST of CHOICES ===\n\n");
printf("Choose a path:\n");
printf("1. Spooky Cave \n");
printf("2. Deep Woods \n");
printf("3. Glowing Road \n");

// Prompt user for input
printf("Enter the number of your choice (1-3): ");

// Read user input
  scanf("%d", &choice);


 if(choice < 1 || choice > 3)
 {
 printf("Invalid choice. Please enter a number between 1 and 3.\n\n");
 }

 }

// Respond to user choice
 if ( choice == 1)
{
    spooky_cave();
}
else if ( choice == 2)
{
    deep_woods();
}
else 
{
   glowing_road();
}

while(1)
{
    printf("\n\nDo you want to play again? (1 for Yes, 2 for No): ");
    scanf("%d", &play_again);

    if(play_again == 1 || play_again == 2)
    {
        choice = 0; // Reset choice for the next round
        break;
    }
    printf("Invalid choice. Please enter 1 for Yes or 2 for No.\n");

}



if(play_again == 2)
{
    play_again = 0; // Exit the game loop
}
 printf("\nThank you for playing! Goodbye!\n");


 }

return 0;
}








// Function for Spooky Cave path
void spooky_cave(void)
{
int pick =0;


    printf("\n--- SPOOKY CAVE ---\n\n");
    printf("You enter the Spooky Cave...Its dark!\n");

    // Loop until valid input is received
while(1)
{

    printf("1. light a torch\n");
    printf("2. Keep going in the dark\n");
    printf("Enter your choice (1-2): ");

 scanf("%d", &pick);

if( pick ==1 || pick == 2)
{
    break;
}
    printf("Invalid choice. Please enter 1 or 2.\n");
}

if (pick == 1)
{
    printf("You light a torch and see glittering treasures! You win!\n");
}
else 
{
    printf("You stumble in the dark and fall into a pit. Game over.\n");
}

}


// Function for Deep Woods path
void deep_woods(void)
{

int pick = 0;

    printf("\n--- DEEP WOODS ---\n\n");
    printf("You walk into the Deep Woods... The trees whisper.\n");

while(1) 
{  

    printf("1. Follow the sound of running water\n");
    printf("2. Climb a tree to get a better view\n");
    printf("Enter your choice (1-2): ");
    scanf("%i", &pick);
if(pick == 1 || pick == 2)
{
    break;
}
    printf("Invalid choice. Please enter 1 or 2.\n");
}

if (pick == 1)
{

    printf("You follow the sound and find a hidden waterfall with a treasure chest! You win!\n");
}
else
{
    printf("You climb a tree but lose your footing and fall. Game over.\n");
}

}


void glowing_road(void)

{
int pick = 0;

    printf("\n--- GLOWING ROAD ---\n\n");
    printf("The ground glows softly... A sign appears.\n");

    while(1)
    {
    printf("1. Follow the glowing arrow pointing left\n");
    printf("2. Follow the glowing arrow pointing right\n");
    printf("Enter your choice (1-2): ");    

        scanf("%i", &pick);
        if(pick == 1 || pick == 2)
        {
            break;
        }
        else
        {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }
    }

if (pick == 1)
{
    printf("You follow the left arrow and find a peaceful meadow with a hidden treasure! You win!\n");
}
else if (pick == 2)
{
    printf("You follow the right arrow and encounter a dead end. Game over.\n");
}
else
{
    printf("Invalid choice. Please enter 1 or 2.\n");
}

}

