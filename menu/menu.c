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
#define CMD_MAX_LEN 128
int Help();
int Quit();

typedef struct DataNode
{
	char *cmd;
	char *desc;
	int (*handler)();
	struct DataNode *next;
}tDataNode;

static tDataNode head[]=
{
	{"help","This is help command.",Help,&head[1]},
	{"version","Menu version v1.0",NULL,&head[2]},
	{"quit","Quit from menu",Quit,NULL}
};

int Help()
{
	printf("Menu list:\n");
	tDataNode *p = head;
	while(p != NULL)
	{
		printf("%s - %s\n",p->cmd,p->desc);
		p = p->next;
	}
	return 0;
}
int Quit()
{
	exit(0);
}
void others()
{
	printf("Wrong command\n");
}

int main()
{
	//cmd line begins
	while(TRUE)
	{
		char cmd[CMD_MAX_LEN];
		printf("menu>");
		scanf("%s",cmd);
		tDataNode *p = head;
		while(p != NULL) {
			if(strcmp(p->cmd,cmd) == 0)
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
