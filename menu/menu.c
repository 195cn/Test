/*****************************
File name	:menu.c
Author		:xbw
Date		:2018-10-31 11:46
Description	:menu main
****************************/

#include<stdio.h>
#include<string.h>

#include"cmd.h"

#define TRUE 	1
#define FALSE 	0
#define CMD_SIZE	128


int main()
{
	char cmd[CMD_SIZE];
	while(TRUE)
	{
		tDataNode *p = head;
		printf("menu>");
		scanf("%s",cmd);
		while(p != NULL)
		{
			if(strcmp(cmd,p->cmd) == 0)
			{
				printf("%s - %s\n",p->cmd,p->desc);
				if(p->handler != NULL)
				{
					p->handler();
				}
				break;
			}
			p = p->next;
		}
	}
}
