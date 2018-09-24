#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

void main()
{
	int fahr,celsius;
	printf("Temperature:\n");
	for(fahr = UPPER;fahr >= LOWER;fahr -= STEP)
	{
		celsius = (fahr - 32) * 5 / 9;
		printf("%4d\t%4d\n",fahr,celsius);
	}
}
