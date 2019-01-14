#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int info;
    struct node *left,*right;
};
struct node *root;
struct node *bst(struct node *root,int item)
{
    struct node *nw;
    nw=(struct node *)malloc(sizeof(struct node));
    nw->info=item;
    nw->left=nw->right=NULL;
    if(root==NULL)
    {
        root=nw;
    }
    else if(root->info>item)
    {
        root->left=bst(root->left,item);
    }
    else
    {
        root->right=bst(root->right,item);
    }
    return root;

}
void display(struct node *ptr)
{
    if(ptr!=NULL)
    {
        display(ptr->left);
        printf("%d",ptr->info);
        display(ptr->right);

    }printf("\n");
}
void main()
{

    int item,i; char ch='y';
    root=NULL;
    while(ch=='y')
    {
        printf("\n enter the no. to be inserted :");
        scanf("%d",&item);
        root=bst(root,item);
        display(root);
        printf(" Do you want to insert more ?? Y/N");
        ch=getch();
    }

}
