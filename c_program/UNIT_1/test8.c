#include<stdio.h>

void main()
{
	int c;
	int nw = 0;
	int state = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			state = 0;
		}
		else
		{
			if(state == 0)
			{
				state = 1;
				nw++;
			}
		}
	}
	printf("num of word:%d\n",nw);
}
