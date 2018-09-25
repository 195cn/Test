#include<stdio.h>
#include<string.h>
#include"player.h"

void main()
{
	struct PLAYER a,b;
	addplayer(&a,"195",100,18,10);
	outputplayer(&a);
	addplayer(&b,"竹鼠a",90,23,8);
	outputplayer(&b);
	while(battle(&a,&b));
}
