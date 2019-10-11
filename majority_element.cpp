/*#include<iostream>
#include<vector>
using namespace std;
int main(void)
  {
    int t;
    cin>>t;
    while(t!=0)
    {
      long int n,m,res=0;
      int flag=0;
      vector<int> ar;
      cin>>n;
     
      for(int i=1;i<=n;i++)
      {
         cin>>m;
         ar.push_back(m);
       }
       vector<int>::iterator itr = ar.begin();
              vector<int>::iterator it = ar.begin();

       for(;itr!=ar.end();itr++)
       {  int count=0;
          for(it=ar.begin();it!=ar.end();it++)
           {
             if((*itr)==(*it))
             {
               count++;
              }
             // cout<<"for"<<*itr<<"count=>"<<count<<endl;
            }
            if(count>(n/2))
            {
             res = *itr;
             flag=1;
             break;
            }
            
        }
         // end of for loop.
         if(flag==1)
         {
            cout<<res<<endl;

           }
         else
         {
        cout<<"-1"<<endl;
         }
         
         t--;
     }
      // End of while loop.
}
// end of main loop;*/


#include<iostream>
#include<map>
using namespace std;
int main(void)
  {
    int t;
    cin>>t;
    while(t!=0)
    {
      long int n,m,res=0;
      int flag=0;
      map<int,int> mp;
      cin>>n;
     
      for(int i=0;i<n;i++)
      {
         cin>>m;
         mp[m]+=1;
        
       }
      map<int,int>::iterator itr=mp.begin();
      for(;itr!=mp.end();itr++)
      {
           if((itr->second)>(n/2))
           {
               res = itr->first;
               flag=1;
               break;
           }
      }
         // end of for loop.
         if(flag==1)
         {
            cout<<res<<endl;

           }
         else
         {
        cout<<"-1"<<endl;
         }
         
         t--;
     }
      // End of while loop.
}
// end of main loop;
