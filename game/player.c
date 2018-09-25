#include<stdio.h>
#include<string.h>
#include"player.h"

//给每一个属性赋值
void addplayer(struct PLAYER *a,char *name,int health,int attack,int speed)
{
	strcpy(a->name , name);
	a->health = health;
	a->attack = attack;
	a->speed = speed;
}
//输出所有属性
void outputplayer(struct PLAYER *a)
{
	printf("%s\t%d\t%d\t%d\n",a->name,a->health,a->attack,a->speed);
}
