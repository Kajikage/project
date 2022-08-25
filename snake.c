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
    
}