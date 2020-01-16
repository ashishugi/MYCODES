#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int h;
struct node
{
 int info;
 struct node *left,*right;
};
struct node *first;
void insert(int item)
{ struct node *nw,*ptr,*prev;
 int h1=0;
 nw=(struct node *)malloc(sizeof(struct node));
 nw->info=item;
 nw->left=NULL;
 nw->right=NULL;
 if(first==NULL)
 {
  first=nw;
 }
 else
 {    ptr=first;
  while(ptr!=NULL)     // seraching where to be inserted.
  { prev=ptr;
  h1++;
   if(ptr->info>item)
   {
   ptr=ptr->left;
   }
   else
   {
     ptr=ptr->right;
   }
  }// end of the while .
  h1++;
  if(prev->info>item)
  {
   prev->left=nw;
  }
  else
  {
   prev->right=nw;
   }
   if(h<h1)
   {
   h=h1;
   }
  }// end of the else.
}// end of the insertion function.
void display(struct node *ptr)
{
 if(ptr!=NULL)
 {
  display(ptr->left);
  printf("%d ",ptr->info);
  display(ptr->right);
 }
}
void main()
{
 int i,j,item;
 char ch='y';
 clrscr();
 first=NULL;
 while(ch=='y')
 {  printf("\nenter the node that  s  to be inserted:\n");
 scanf("%d",&item);
 insert(item);
 display(first);
 printf("do you want to insert more y/n:");
 ch=getch();
 }
 printf("\n the maximum height of tree is : %d",h-1);
 getch();
}








