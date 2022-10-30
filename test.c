#include <stdio.h>
#include <stdlib.h>
void displaychart(int position_1, int position_2)
{
	int i, j, x, y, row = 0, table;
	if (position_1 == 100)
	{
		printf("Congratulations!!!!!! \n\nPlayer 1 wins\n");
		exit(0);
	}
	else if (position_2 == 100)
	{
		printf("Congratulations!!!!!! \n\nPlayer 2 wins\n");
		exit(0);
	}

	for (i = 10; i > 0; i--)
	{
		x = i - 1;
		if ((row % 2) == 0)
		{
			y = 0;
			for (j = 10; j >= 1; j--)
			{
				table = (i * j) + (x * y++);

				if (position_1 == table)
					printf("*P1*\t");
				else if (position_2 == table)
					printf("*P2*\t");
				else
					printf("%d\t", table);
			}
			row++;
		}
		else
		{
			y = 9;
			for (j = 1; j <= 10; j++)
			{
				table = (i * j) + (x * y--);
				if (position_1 == table)
					printf("*P1*\t");
				else if (position_2 == table)
					printf("*P2*\t");
				else
					printf("%d\t", table);
			}

			row++;
		}
		printf("\n\n");
	}
}
