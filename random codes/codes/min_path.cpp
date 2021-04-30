#include<iostream>
#include<climits>
using namespace std;
int cost[4][4];
int min (int a, int b, int c)
{
  if(a<b && a<c)
  {
   return a;
   }
  else if(b<a && b<c)
  {
  return b;
  }
  else
  {
   return c;
   }
}

int min_path(int i,int j,int m,int n)
{
  if(i==m && j==n)
  {
   return cost[i][j];
  }
  if(i>3 || j>3)
  {
  return INT_MAX;
  }
  else 
  {
  int sum=0;
  sum+=(cost[i][j]+min(min_path(i+1,j,m,n),min_path(i+1,j+1,m,n),min_path(i,j+1,m,n)));
  cout<<sum<<" ";
  return sum;
  }
}
int main()
{

int m,n;
  cout<<" enter the cost matrix \n";
  for(int i=1;i<=3;i++)
  {
  for(int j=1;j<=3;j++)
  {
    cin>>cost[i][j];
    
   }
  }
  
  cout<<"\n Now enter the destination \n";
  cin>>m>>n;
  int res = min_path(1,1,m,n);
  cout<<" the required result is : "<<res;
}// end of main.   
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  


