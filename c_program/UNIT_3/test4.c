#include<stdio.h>
//itoa函数，能处理最大的附属

void itoa(char s[],int n)
{
	int sign;
	int i;
	long int temp;
	//对2的补码最小负数的绝对值比最大正数大1，会溢出，需要转成long int
	if((sign = n) < 0)
		temp = -n;
	i = 0;
	do
	{
		s[i++] = temp % 10 + '0';
	}while((temp /= 10) > 0);
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
}

void main()
{
}
