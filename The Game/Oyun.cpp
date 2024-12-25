#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
int guess, number, attempts; 	
	
	srand(time(0));
	
	number = rand() % 100+1;
	
	printf("I have picked a number between 1 and 100. Try to guess it!\n");
	
	do {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
            printf("Lower!\n");
            
        else if (guess < number)
            printf("Higher!\n");
            
        else
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            
    } while (guess != number);
	
	
	
	
	return 0;
}
