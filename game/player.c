#include<stdio.h>
#include<string.h>
#include"player.h"
#define LIVE 1
#define DEAD 0

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
	printf("名字:%8s\t血量:%4d\t攻击:%4d\t速度:%4d\n",
			a->name,a->health,a->attack,a->speed);
}
//a对b发动攻击
int fight(struct PLAYER *a,struct PLAYER *b)
{
	b->health -= a->attack;
	printf("%s对%s造成%d点伤害\n",a->name,b->name,a->attack);
	if(b->health > 0)
	{
		printf("%s剩余血量%d\n",b->name,b->health);
		return LIVE;
	}
	else
	{
		b->health = 0;
		printf("%s死亡\n",b->name);
		return DEAD;
	}
}

//a先手进行1回合战斗
int fighttime(struct PLAYER *a,struct PLAYER *b)
{
	printf("回合开始:\n");
	if(fight(a,b)) 
		if(fight(b,a));
		else
			return DEAD;
	else
		return DEAD;
	return LIVE;
}

//判断先手并战斗
int battle(struct PLAYER *a,struct PLAYER *b)
{
	if(a->speed >= b->speed)
		return fighttime(a,b);
	else
		return fighttime(b,a);
}
