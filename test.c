#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int i,j,t,c,sft=0,diceres;
    for(i=10;i>0;i--)
	{
		t=i-1;
		if((sft%2) == 0)
		{
			c=0;
			for(j=10;j>=1;j--)
			{
            diceres=(i*j)+(t*c++);
            printf("%d\t",diceres);
            }
			sft++;
		}
		else
		{
			c=9;
			for(j=1;j<=10;j++)
			{
				diceres=(i*j)+(t*c--);
				printf("%d\t",diceres);
			}


			sft++;
		}
		printf("\n\n");
	}
}
