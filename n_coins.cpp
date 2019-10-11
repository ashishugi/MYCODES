#include<iostream>
#include<climits>
using namespace std;

  int size;
int fun(int s[],int m,int n)
{

    if(n==0)
    {
    cout<<"\n "<<s[m];
     return 1;
    }
    if(n<0)
    {
     return 0;
    }
     else
     {
       int ans=0;
        for(int i=1;i<=size;i++)
        {
       
         ans+=fun(s,i,n-s[i]);
         }
       return ans;
     }
     
    
}
  // end of function.
int main(void)
 {
    int m[10],n;
    cout<<" enter the value of N\n";
    
    cin>>n;
    cout<<" enter the size of array\n";
    cin>>size;
        cout<<" enter the value of sum array\n";
    for(int i=1;i<=size;i++)
    {
    
       cin>>m[i];
      
     }
     
     int ans = fun(m,1,n);
     cout<<"\n the resultant number of combination  is \n"<<ans;
 }  // End of main()
