#include<stdio.h>

//从字符串s中删除s1字符串中所含的所有字符
#define YES 1
#define NO 0

void squeeze(char s[],char s1[])
{
	int i,j,k;
	int state;
	state = NO;
	//源字符串循环
	for(i = j = 0;s[i] != '\0';i++)
	{
	//匹配字符串循环
		for(k = 0;s1[k] != '\0';k++)
		{
			if(s[i] == s1[k])
				state = YES;
		}
	//没有匹配项则写入源字符串
		if(state == NO)
			s[j++] = s[i];
		else
			state = NO;
	}
	s[j] = '\0';
}

void main()
{
	char s[100] = "hello world,how are you today?";
	char s1[10] = "lo";
	squeeze(s,s1);
	printf("%s\n",s);
}
