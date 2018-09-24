#include<stdio.h>

void main()
{
	int i,c,lim;
	char s[10];
	i = 0;
	lim = 10;
	while(i < lim - 1)
	{
		if((c = getchar()) != '\n')
			if(c != EOF)
				s[i] = c;
			else break;
		else break;
		i++;
	}
	s[++i] = '\0';
	printf("%s\n",s);
}
