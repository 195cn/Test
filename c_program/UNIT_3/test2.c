#include<stdio.h>
//escape函数，将\n等转义字符转为显性显示

void escape(char *s,char *t)
{
	int i,j;
	for(i = 0,j = 0;t[i] != '\0';i++)
	{
		switch(t[i])
		{
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			case ' ':
				s[j++] = '[';
				s[j++] = 'B';
				s[j++] = 'L';
				s[j++] = 'A';
				s[j++] = 'N';
				s[j++] = 'K';
				s[j++] = ']';
				break;
			default:
				s[j++] = t[i];
		}
	}
	s[j] = '\0';
}

void main()
{
	char s[100];
	char t[100] = "hello	world	  	dfasdfas";
	escape(s,t);
	printf("%s\n",s);
}

