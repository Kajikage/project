#include<stdio.h>
#include<stdlib.h>
void displaychart(int position,char player[2])
{
    int i,j,x,y,row=0,table;
		if(position==100)
		{
			printf("Congratulations!!!!!! \n\nPlayer %s wins\n",player);
			scanf("%*s");
			exit(0);
		}
	
    for(i=10;i>0;i--)
	{
		x=i-1;
		if((row%2) == 0)
		{
			y=0;
			for(j=10;j>=1;j--)
			{
				table=(i*j)+(x*y++);
				

				if(position==table)
				{
					printf("%s %s\t",player,player);
				}
				else
				printf("%d\t",table);

            }
			row++;
		}
		else
		{
			y=9;
			for(j=1;j<=10;j++)
			{
				table=(i*j)+(x*y--);

				if(position==table)
					printf("%s %s\t",player,player);
				else
					printf("%d\t",table);
			}


			row++;
		}
		printf("\n\n");
	}
}