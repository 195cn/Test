/*****************************
File name	:cmd.h
Author		:xbw
Date		:2018-10-31 11:46
Description	:menu cmd.h
****************************/

#include<stdio.h>
#include<stdlib.h>
#include"perk.h"

int Quit();
int Help();
int PerkList();


typedef struct DataNode
{
	char *cmd;
	char *desc;
	int (*handler)();
	struct DataNode *next;
}tDataNode;

tDataNode head[]=
{
	{"help","This is help command\n",Help,&head[1]},
	{"perks","This is perk list\n",PerkList,&head[2]},
	{"cmd2","This is \n",NULL,&head[3]},
	{"cmd3","This is \n",NULL,&head[4]},
	{"cmd4","This is \n",NULL,&head[5]},
	{"cmd5","This is \n",NULL,&head[6]},
	{"cmd6","This is \n",NULL,&head[7]},
	{"quit","Quit menu.\n",Quit,NULL}
};


int Help()
{
	tDataNode *p = head;
	printf("All command:\n");
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

int PerkList()
{
    tPerk *p = perk_list;
    printf("Perk List:\n");
    while(p != NULL)
    {
        printf("%d.%s - %s\n",p->num,p->name,p->desc);
        p = p->next;
    }
}
