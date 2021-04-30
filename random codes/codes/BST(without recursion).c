#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
 {
     int info;
     struct node *left,*right;
 };
  struct node *root;
void insert(struct node *ptr,int item)
{
    struct node *p,*nw;
    nw=(struct node *)malloc(sizeof(struct node));
    nw->info=item;
    nw->left=NULL;
    nw->right=NULL;
     if(root==NULL)
     {
         root=nw;
     }
     else
     { ptr=root;
         while(ptr!=NULL)
         {
             p=ptr;
             if(ptr->info>item)
             {
                 ptr=ptr->left;
             }
             else
             {
                 ptr=ptr->right;
             }
         }//end of while
         if(p->info>item)
         {
             p->left=nw;
         }
         else
         {

             p->right=nw;
         }

     }

}//end of the insert function
void display(struct node *ptr)
{
    if(ptr!=NULL)
    {

        display(ptr->left);
        printf("%d",ptr->info);
        display(ptr->right);
    }
    printf("\n");

}
void main()
{

    int item,i;
    char ch;
    root=NULL;
    ch='y';
    while(ch=='y')

    {
        printf("\nenter the item to be inserted :");
        scanf("%d",&item);
        insert(root,item);
         display(root);
        printf("\n do yu want to insert more Y/N");
        ch=getch();
    }

}
