#include<stdio.h>

#define MAXLINE 10
//十六进制转整数
long int myhtoi(char *s)
{
	int i = 0;
	int num = 0;
	//判断可选前缀0x，0X
	if(s[1] == 'x' || s[1] == 'X')
		if(s[0] == '0')
			i = 2;
		else return -1;
	//按位取值
	while(s[i] != '\0')
	{
		if(s[i] >= '0' && s[i] <= '9')
			num = num * 16 + s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'f')
			num = num * 16 + 10 + s[i] - 'a';
		else if(s[i] >= 'A' && s[i] <= 'F')
			num = num * 16 + 10 + s[i] - 'A';
		else return -1;
		i++;
	}
	return num;
}

void main()
{
	char s[MAXLINE] = "0xff";
	long int num = 0;
	num = myhtoi(s);
	printf("%ld\n",num);
}
