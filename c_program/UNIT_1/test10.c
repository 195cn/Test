#include<stdio.h>

void test(char *a)
{
	//*a = "yes";
	*a = 'i';
	printf("%c",*a);
}

void main()
{
	test("hello world\n");
}
