#include<stdio.h>
//源字符串中，输出和匹配字符串中首先匹配的字符位置
#define YES 1
#define NO 0

int any(char *s,char *t)
{
	int i,j;
	for(i = 0;s[i] != '\0';i++)
	{
		for(j = 0;t[j] != '\0';j++)
		{
			if(s[i] == t[j])
				return i;
		}
	}
	return -1;
}


void main()
{
	char s[100] = "hello world how are you";
	char t[10] = "abc";
	printf("%d\n",any(s,t));
}
