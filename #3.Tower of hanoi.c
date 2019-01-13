
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void tower(n,a,b,c)
{ if(n==1)
   { printf("reached to first print : %c to %c\n",a,c);
//   printf("enter in the if condition of the tower, that is at n==1 condition\n");
   }
   else
   {
    tower(n-1,a,c,b,printf("called 1st function of the else here \n"));
    printf("reached to 2nd print: %c to %c\n",a,b);
    tower(n-1,b,a,c,printf("called 2nd function of the else\n"));
   }
}
void main()
{
int n,i=1;
char a='A',b='B',c='C';
clrscr();
printf("enter the number of rings in the tower");
scanf("%d",&n);
tower(n,a,b,c,i);
getch();
}
