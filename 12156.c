#include<stdio.h>
#include<string.h>
void printhalf(char l[])
{
int half=strlen(l)/2;
int counter=0;
while(counter<half)
{
printf("%c",l[counter]);
counter+=2;
}
printf("\n");
}
	int main()
	{
	int t;
	scanf("%d",&t);
	char m[205];
	while(t>0)
	{
	scanf("%s",m);
	printhalf(m);
	t--;
	}
	return 0;
	}
