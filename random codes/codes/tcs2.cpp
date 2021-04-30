#include<iostream>
using namespace std;
int cal(int time[][100],int i,int j,int t)
{
  int sol=0;
    for(int m=1;m<=j;m++)
    {
     sol = sol+(time[i][m]*time[i][t+1]);
     }
    return sol;
}


int maxi(int res[][100],int i,int j,int n)
 {
   int maximum = res[i][j];
   int index=1;
   for(int m=1;m<=n;m++)
   {
     if(maximum<res[m][j])
     {
      maximum = res[m][j];
      index=m;
      }
   }
   return index;
}  // end of maxi function.


/***************************start of the main function*********************************/
int main(void)
{
  int n,t,time[100][100],res[100][100];
  cin>>n;
  cin>>t;
  for(int i=1;i<=n;i++)
  {
   for(int j=1;j<=t+1;j++)
    {
     cin>>time[i][j];
    }
  }
  
  for(int i=1;i<=n;i++)
  {
   int k=1;
   for(int j=2;j<=t;j=j+2)
     { 
     
       res[i][k] = cal(time,i,j,t);
       k++;
      }
   } // end of nested for loop.
   
   int result[100];
   for(int i=1;i<=100;i++)
   {
    result[i]=0;
   }
   int i=1,sol=0;
   for(int j=1;j<=t/2;j++)
   {
    
     sol = maxi(res,i,j,n);
     
     result[sol] = result[sol]+1;
    }
   
    int max=result[1],index=1;
    for(int i=1;i<=t;i=i+1)
    {
     if(max<result[i])
      {
       max=result[i];
       index = i;
       }
     }
     
     
   
  
     cout<<index;
}  // end of main.
       
    
    
    
    
    
    
    
    
    
    
