#include<stdio.h>

void main()
{
	int ns,nt,nl,c;
	ns = 0;
	nt = 0;
	nl = 0;
	while((c = getchar()) != EOF)
	{
		if(c == '\n')
			nl++;
		else if(c == '\t')
			nt++;
		else if(c == ' ')
			ns++;
	}
	printf("nl:%d\tnt:%d\tns:%d\n",nl,nt,ns);
}
