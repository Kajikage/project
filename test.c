#include<stdio.h>
#include<stdlib.h>
void displaychart(int curp,char player[2])
{
    int i,j,t,c,sft=0,table;
    for(i=10;i>0;i--)
	{
		t=i-1;
		if((sft%2) == 0)
		{
			c=0;
			for(j=10;j>=1;j--)
			{
				table=(i*j)+(t*c++);

				if(curp==table)
					printf("%s\t",player);
				else
				printf("%d\t",table);

            }
			sft++;
		}
		else
		{
			c=9;
			for(j=1;j<=10;j++)
			{
				table=(i*j)+(t*c--);

				if(curp==table)
					printf("%s\t",player);
				else
					printf("%d\t",table);
			}


			sft++;
		}
		printf("\n\n");
	}
}
