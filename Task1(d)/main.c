#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number, guess, nguesses=1;
	srand(time(0));
	number = rand()%10 + 1;
	do
	{
		printf("Guess the number between 1 to 10\n");
		scanf("%d", &guess);
		if(guess>number)
		{
			printf("Wrong guess\n");
		}
		else if(guess<number)
		{
			printf("Wrong guess\n");
		}
		else
		{
			printf("Yay you got it %d tries",nguesses);
		}
		nguesses++;
	} while(guess!=number);

	return 0;
}

