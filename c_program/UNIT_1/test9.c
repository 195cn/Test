#include<stdio.h>
//每行输出一个单词
#define OUTWORD 1
#define INWORD 0
void main()
{
	int c;
	int state = INWORD;
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			state = OUTWORD;
		}
		else
		{
			if(state == OUTWORD)	
			{
				putchar('\n');
				state = INWORD;
			}
			putchar(c);
		}
	}
}
