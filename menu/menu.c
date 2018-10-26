/******************************************
COPY RIGHT	:
File name	:menu.c
Description	:menu's main fuction
Author		:xbw
Version		:1.1
Date		:2018-10-26 11:35
History		:
******************************************/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

void help()
{
	printf("Show help\n");
}
void quit()
{
	exit(0);
}
void others()
{
	printf("Wrong command\n");
}

int main()
{
	char cmd[128];
	while(TRUE)
	{
		printf("menu>");
		scanf("%s",cmd);
		if(!strcmp(cmd,"help"))
		{
			help();
		}else if(!strcmp(cmd,"quit"))
		{
			quit();
		}else
		{
			others();
		}
	}
}
