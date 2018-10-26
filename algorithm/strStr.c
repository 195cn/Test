/***********************
file name	:strStr.c
author		:xbw
date		:2018-10-26 21:11
***********************/
#include<stdio.h>
#include<string.h>

#define STR_SIZE 100

int strStr(char *source,char *target);

int main()
{
	char source[STR_SIZE];
	char target[STR_SIZE];

	scanf("%s",source);
	scanf("%s",target);
	printf("%d",strStr(source,target));
	return 0;
}

//ouput the index of target string in soure string
int strStr(char *source,char *target)
{
	int i,j;
	int len_source = strlen(source);
	int len_target = strlen(target);

	for(i = 0;i < len_source - len_target + 1;i++)
	{
		for(j = 0;j < len_target;j++)
		{
			if(source[i+j] != target[j])
				break;
		}
		if(j == len_target)
			return i;
	}
	return -1;
}
