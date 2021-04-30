#include<iostream>
using namespace std;
int main(void)
{
    long long int nh,m,d_hole[100],d_ball[1010],space[1010],res[1010];
  
   
   cin>>nh;
   
   
   for(int i=1;i<=nh;i++)
   {
   cin>>d_hole[i];
   }
    
   cin>>m;

   
   for(int i=1;i<=m;i++)
   {
    cin>>d_ball[i];
    res[i]=0;
   }
   for(int i=1;i<=nh;i++)
   {
   space[i]=i;
   } // end of cal
     for(int i=1;i<=m;i++)
      {
       for(int j=nh;j>0;j--)
        {
          if(space[j]>0 && d_hole[j]>=d_ball[i])
          {
          res[i]=j;
          space[j]=space[j]-1;
          break;
        
          }// end of if
         }
       } // end of nested for loop
       
       

   for(int i=1;i<=m;i++)
   {
   cout<<res[i]<<" ";
   }
  

} // end of main loop.
   
   
