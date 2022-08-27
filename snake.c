#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int rd()
{
    int rem;
    srand(time(0));
    do
    rem = (int)(rand()%6) + 1;
	while(rem==0);
}
int main (void)
{
	int i,dice,cur_pos1=0,cur_pos2=0;
	char ch;
	while(1)
	{
		printf("Snakes: | 25 to 9  | 65 to 40 | 99 to 1  |\nLadder: | 13 to 42 | 60 to 83 | 70 to 93 |\n\n");
		printf("Choose your option\n");
		printf("[1] Player 1 plays\n");
		printf("[2] Player 2 plays\n");
		printf("[3] Exit\n");
		scanf("%s",&ch);
    }
}
