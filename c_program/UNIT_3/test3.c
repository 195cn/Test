#include<stdio.h>
//将A-Z的缩写转化为全称
//假设全部合法
void expend(char s[],char t[])
{
	int i,j,k,temp;
	for(i = 0,j = 0;s[i] != '\0';i++)
	{
		if(s[i+1] == '-')
		{
			temp = s[i+2] - s[i] + 1;	//获取a-？一共几个字符，a-b有两个
			for(k = 0;k < temp;k++)
				t[j++] = s[i] + k;
			i += 2;					//跳过3个字符a-z
			t[j++] = '\n';
		}
		else
			t[j++] = s[i];
	}
	t[j] = '\0';
}
void main()
{
	char s[100] = "A-ZS1-9AD0-4Sc-fA-DFA-R";
	char t[1000];
	expend(s,t);
	printf("%s\n%s\n",s,t);
}
