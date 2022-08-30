#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include "test.c"
int random() // random dice
{
    int rem;
    srand(time(0));
    do
    rem = (int)(rand()%6) + 1;
	while(rem==0);
}
int main (void)
{
	int i,dice,position_1=0,position_2=0;
	char ch;
	while(1)
	{// prints the dispaly chart
		printf("Snakes: | 25 to 9  | 65 to 40 | 99 to 1  |\nLadder: | 13 to 42 | 60 to 83 | 70 to 93 |\n\n");
		printf("Choose your option\n");
		printf("[1] Player 1 plays\n");
		printf("[2] Player 2 plays\n");
		printf("[3] Exit\n");
		scanf("%s",&ch);
        printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\t\t\t    Snakes And Ladders\n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");

		switch(ch)
		{
		case '1':dice=random();
		system("cls");
		printf(" player 1 is playing \n");
	
		position_1=dice+position_1;
					if(position_1<101)
					{
						// for snakes
						if(position_1==99)
						{
						displaychart(1,"-P1-");
						}
						if(position_1==65)
						{
						displaychart(40,"-P1-");
						}
						if(position_1==25)
						{
						displaychart(9,"-P1-");
						}
						// for ladders
						if(position_1==70)
						{
						displaychart(93,"-P1-");
						}
						if(position_1==60)
						{
						displaychart(83,"-P1-");
						}
						if(position_1==13)
						{
						displaychart(42,"-P1-");
						}
						else{
							displaychart(position_1,"-P1-");
						}
                        printf("\t\t\t\tDice = %d\n",dice);
					}
					else
					{
						position_1=position_1-dice;
						printf("Range exceeded of Player 1.\n");
						displaychart(position_1,"-P1-");
					}
					printf("Player 2 position is %d\n\n",cur_pos2);
					break;
		case '2':dice=random();
		printf("player 2 is playing \n");

					cur_pos2=dice+cur_pos2;
					if(cur_pos2<101){
						if(cur_pos2==99)	//snake
						{
						displaychart(1,"$-P2-");
						}
						if(cur_pos2==65)	//snake
						{
						displaychart(40,"-P2-");
						}
						if(cur_pos2==25)	//snake
						{
						displaychart(9,"-P2-");
						}
						if(cur_pos2==70)	//ladder
						{
						displaychart(93,"-P2-");
						}
						if(cur_pos2==60)	//ladder
						{
						displaychart(83,"-P2-");
						}
						if(cur_pos2==13) 	//ladder
						{
						displaychart(42,"-P2-");
						}
						else{
							displaychart(cur_pos2,"-P2-");
						}
						printf("\t\t\t\tDice = %d\n",dice);
					}
						else
					{
						cur_pos2=cur_pos2-dice;
						printf("Range exceeded of Player 2.\n");
						displaychart(cur_pos2,"-P2-");
					}
					printf("Player 1 position is %d\n\n",cur_pos1);


			
			break;
		case '3':exit(0);
			break;
		}

    }
	}

