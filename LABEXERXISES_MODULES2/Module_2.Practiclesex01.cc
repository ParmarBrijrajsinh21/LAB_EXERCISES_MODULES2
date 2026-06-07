//1. Embedded Systems , operating Systems, and The game Developments .
#include <stdio.h>
int main()
{
    int choice;
    printf("Embedded System Simulation (LED Control)\n");
    printf("1. Turn ON LED\n");
    printf("2. Turn OFF LED\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("LED is ON\n");
    } else if(choice == 2) {
        printf("LED is OFF\n");
    } else {
        printf("Invalid Choice\n");
    }

}

//2.operatings Systems::
#include <stdio.h>
int main() 
{
    int process;
    printf("Operating System Process Simulation\n");
    printf("Enter number of processes: ");
    scanf("%d", &process);

    for(int i = 1; i <= process; i++) {
        printf("Process %d is running...\n", i);
    }

    printf("All processes executed successfully.\n");
}


//3. Game Developments ::
#include <stdio.h>
int main() 
{
	int number, guess;

    srand(time(0));
    number = rand() % 10 + 1;

    printf("Game: Guess the Number (1 to 10)\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > number) {
            printf("Too High!\n");
        } else if(guess < number) {
            printf("Too Low!\n");
        } else {
            printf("Correct! You won ??\n");
        }

    } while(guess != number);

}
