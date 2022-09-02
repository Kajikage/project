#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include "test.c"
int rd() // random dice
{
    int rem;
    srand(time(0));
    do
    rem = (int)(rand()%6) + 1;
	while(rem==0);
	return rem;
}
int main (void)
{
	int i,dice,position_1=0,position_2=0;
	char ch;
	while(1)
	{// prints the dispaly chart
	 printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\t\t\t    Snakes And Ladders\n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
		printf("Snakes: | 25 to 9  | 65 to 40 | 99 to 1  |\nLadder: | 13 to 42 | 60 to 83 | 70 to 93 |\n\n");
		printf("Choose your option\n");
		printf("[1] Player 1 plays\n");
		printf("[2] Player 2 plays\n");
		printf("[3] Exit\n");
		scanf("%c",&ch);
        printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\t\t\t    Snakes And Ladders\n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");

		switch(ch)
		{
		case '1':dice=rd();
		
		system("cls");
		printf("player 1 is playing \n");
	
		position_1=dice+position_1;
					if(position_1<101)
					{
						// for snakes
						if(position_1==99)
						{
							position_1 = 1;
							displaychart(position_1,position_2);
						}
						if(position_1==65)
						{
							position_1 = 40;
							displaychart(position_1,position_2);
						}
						if(position_1==25)
						{
							position_1 = 9;
							displaychart(position_1,position_2);
						}
						// for ladders
						if(position_1==70)
						{
							position_1 = 93;
							displaychart(position_1,position_2);
						}
						if(position_1==60)
						{
							position_1 = 83;
							displaychart(position_1,position_2);
						}
						if(position_1==13)
						{
							position_1 = 42;
							displaychart(position_1,position_2);
						}
						else
						{
							displaychart(position_1,position_2);

						}
                        printf("\t\t\t\tDice = %d\n",dice);
					}
					else
					{
						position_1=position_1-dice;
						printf("Range exceeded of Player 1.\n");
						displaychart(position_1,position_2);
					}
					printf("Player 2 position is %d\n\n",position_2);
					break;
		case '2':dice=rd();
		printf("player 2 is playing \n");
		system("cls");
		position_2=dice+position_2;
					if(position_2<101)
					{
						// for snakes
						if(position_2==99)
						{
							position_2 = 1;
							displaychart(position_1,position_2);
						}
						if(position_2==65)
						{
							position_2 = 40;
							displaychart(position_1,position_2);
						}
						if(position_2==25)
						{
							position_2 = 9;
							displaychart(position_1,position_2);
						}
						// for ladders
						if(position_2==70)
						{
							position_2 = 93;
							displaychart(position_1,position_2);
						}
						if(position_2==60)
						{
							position_2 = 83;
							displaychart(position_1,position_2);
						}
						if(position_2==13)
						{
							position_2 = 42;
							displaychart(position_1,position_2);
						}
						else
						{
							displaychart(position_1,position_2);

						}
                        printf("\t\t\t\tDice = %d\n",dice);
					}
					else
					{
						position_2=position_2-dice;
						printf("Range exceeded of Player 2.\n");
						displaychart(position_1,position_2);
					}
					printf("Player 1 position is %d\n\n",position_1);
					break;
		case '3':exit(0);
		break;
		}

    }
}