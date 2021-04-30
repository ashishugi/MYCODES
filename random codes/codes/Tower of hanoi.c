#include<stdio.h>
#include<stdlib.h>
void tower(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("\n%c->%c",a,c);
	}
	else if(n>1)
	{
		tower(n-1,a,c,b);
		printf("\n%c->%c",a,c);
		tower(n-1,b,a,c);
		
	}
}
int main()
{
	int n,i=0;
	char a='A',b='B',c='C';
	printf("enter no. disk in the rod A:");
	scanf("%d",&n);
	printf("%d",n);
	tower(n,a,b,c);
	
}

