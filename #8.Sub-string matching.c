/***************************** PROGRAM FOR SUB-STRING MATCHING  ************************************/ 
#include<stdio.h>
#include<strings.h>
int main(void)
{
    char str[100],sb[100];
    int i,j=0,c=0,l1=0,l2=0,flag=0;
    printf("enter the string \n");
    gets(str);
    printf("enter the sub string \n");
    gets(sb);
    l1=strlen(str);
    l2=strlen(sb);
    for(i=0;i<l1;i++)
    {

        if(str[i]==sb[j])
        {
            c=i;
            while(sb[j]!='\0')
            {
                if(str[c]!=sb[j])
                {
                    j=0;
                    flag=0;
                    break;
                }
                else
                {
                    j++;
                    c++;
                    flag=1;
                }
            }
        }
    }
    if(flag==0)
    {
        printf("\n the sub string is not found");
    }
    else
    {
        printf("\n the substring is found");
    }

}
