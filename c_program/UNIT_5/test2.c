#include<stdio.h>

//显示输入
int main(int argc,char *argv[])
{
	while(--argc > 0)
		printf("%s%s",*++argv,(argc > 1) ? " ":"");
	putchar('\n');
	return 0;
}
