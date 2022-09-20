#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

<<<<<<< HEAD
int main(void)
=======
void randomPasswordGeneration(int N)
>>>>>>> refs/remotes/origin/master
{
    int i = 0;

	int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char numbers[] = "0123456789";
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char symbols[] = "!@#$^&*?";
    
    char password[N];
    
    randomizer = rand() % 4;
    
    for (i = 0; i < N; i++)
    {
        if (randomizer == 1)
        {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
			printf("%c", password[i]);
        }
        else if (randomizer == 2)
        {
            password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
        {
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
        {
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

<<<<<<< HEAD
    for (i = 0; i < 4; i++) 
    {
        pass[i] = rand() % 9;
        char capLetter = 'A' + (rand() % 26);
        pass[i + 2] = capLetter;
        char letter = 'a' + (rand() % 26);
        pass[i + 3] = letter;
        printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
    }
    printf("\n\n");
=======
int main(void)
{
    int N = 10;
    
    randomPasswordGeneration(N);
    
    return (0);
>>>>>>> refs/remotes/origin/master
}
