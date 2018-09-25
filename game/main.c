#include<stdio.h>
#include<string.h>
#include"player.h"

void main()
{
	struct PLAYER a,b;
	addplayer(&a,"hello",100,40,10);
	outputplayer(&a);
	addplayer(&b,"world",90,60,8);
	outputplayer(&b);
}
