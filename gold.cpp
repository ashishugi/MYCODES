#include<stdio.h>
nt *findSpecialProduct(int inputArray_count, int* inputArray, int* result_count)
 {

      int i,j,prod=1;
    // scanf("%d",&inputArray_count);
     inputArray=(int *)malloc(inputArray_count*sizeof(int));
     result_count=(int *)malloc(inputArray_count*sizeof(int));

    // for(i=0;i<inputArray_count;i++)
    // {
    //     scanf("%d",&inputArray[i]);
     //}
     for(i=0;i<inputArray_count;i++)
     { prod=1;
         for(j=0;j<inputArray_count;j++)
         {
             if(i!=j)
             {
               prod=prod*inputArray[j];
             }
         }
         result_count[i]=prod;
     }
     //for(i=0;i<inputArray_count;i++)
     //{
       //  printf("%d",result_count[i]);
     //}
     return &result_count;

}
int main()
{

    int arr[]={1,2,3,4,5},n=5;
    int *re,i;
    int *res = findSpecialProduct(arr,n,re);
    for(i=0;i<n;i++)
    {
        printf("%d  ",res[i]);
    }

}