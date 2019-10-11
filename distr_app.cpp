#include<iostream>
using namespace std;
/*void dist(long long int napp, long long int nbox)
 {
 
   long long int a_val,b_val;
    a_val=napp/nbox;
    long int count=0;
    long long int b_count=napp/nbox;
    while(b_count>=nbox)
    {
    count++;
    b_count=b_count-nbox;
    }
    
    b_val=nbox*count;
    //cout<<a_val<<" " <<b_val;
     if(a_val==b_val)
     {
      cout<<"NO"<<endl;
     }
     else
     {
      cout<<"YES"<<endl;
     }
    
 
 
} // End of function
*/    
    
   
int main(void)
 {
   int t;
   cin>>t;
   while(t!=0)
   {
     double napp,nbox;
     cin>>napp;
     cin>>nbox;
     //dist(napp,nbox);
     
   double a_val,b_val;
    a_val=napp/nbox;
    double count=0;
    double b_count=napp/nbox;
    while(b_count>=nbox)
    {
    count++;
    b_count=b_count-nbox;
    }   
    
    b_val=nbox*count;
    //cout<<a_val<<" " <<b_val;
     if(a_val==b_val)
     {
      cout<<"NO"<<endl;
     }
     else
     {
      cout<<"YES"<<endl;
     }
     t--;
    }
 } // end of main.
     
