#include<stdio.h>
#include<stdlib.h>

//数值栈
#define BUFSIZE 100
int buf[BUFSIZE];
int bufp = 0;

#define NUMBER '0'

int pop()
{
	if(bufp >0)
		return buf[--bufp];
	else
	{
		printf("Stack is empty");
		return 0;
	}
}
void push(int a)
{
	printf("Stack in : %d\n",a);
	buf[bufp++] = a;
}

int type(int c)
{
	if(c >= '0' && c <= '9')
		return NUMBER;
	else
		return c;
}

int main(int argc,char *argv[])
{
	int c;
	//取第一个参数的第一个字符
	while(--argc > 0 && (c = (*++argv)[0]))
	{
		switch(type(c))
		{
			case NUMBER:
				//如果第一个参数是数字，则把字符串转化成整形入栈
				push(atoi(*argv));
				break;
			case '+':
				printf("Get operator +\n");
				push(pop() + pop());
				break;
			case 'x':
				printf("Get operator x\n");
				push(pop() * pop());
				break;
			default:
				printf("error\n");
		}
	}
	printf("Result is : %d\n",pop());
	return 0;
}
