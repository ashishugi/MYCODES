#include<iostream>
using namespace std;
int main(void)
  {
   int t;
   cin>>t;
   while(t!=0)
     {
      int n;
      cin>>n;
      int ar[n];
      for(int i=1;i<=n;i++)
      {
       cin>>ar[i];
      }
      int count=0;
      
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=n;j++)
         {
            for(int k=1;k<=n;k++)
             {
             
              if(i<j && j<=k)
              {
               if(((ar[i] ^ ar[j])==ar[k]) && (ar[i] ==(ar[j] ^ ar[k])))
                {
                 count=count+1;
                 cout<<i<<" " <<j<<" " <<k<<endl;
                 }
                }
             }
          }
       }
        // end of nested loop
       
       
     cout<<count<<endl;
     t--;
   } // end of while
}
 // end of main.
               
