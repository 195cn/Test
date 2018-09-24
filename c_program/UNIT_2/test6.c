#include<stdio.h>
//将x中从第p位开始的n个位设置为y中最右边n个位

void main()
{
	int x,y,n,p;
	x = 0xff;
	y = 0x77;
	printf("%x\n",x);
	printf("%x\n",y);
	n = 3;
	p = 11;
	y = y & ~(~0 << n);
	x = ( x & ~(~0 << n)) << ( p - n );
	printf("%x\n",x);
	printf("%x\n",y);
	
	x = x | y << ( p - n );
	printf("%x\n",x);
	printf("%x\n",y);
}
