#include<stdio.h>
//折半查找法
int binsearch(int x,int v[],int n);

void main()
{
	int v[10] = {0,1,2,3,4,5,6,7,8,9};
	int x = 4;
	int n = 10;
	printf("%d\ng",binsearch(x,v,n));
}

int binsearch(int x,int v[],int n)
{
	int low,high,mid;

	low = 0;
	high = n - 1;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(x < v[mid])
			high = mid - 1;
		else if(x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
