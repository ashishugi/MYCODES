#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(void)
 {
 
  int t;
  cin>>t;
  while(t!=0)
  {
  unsigned long long int n,sum1=0,sum2=0;
   vector<int> v;
   cin>>n;int m;
   
   for(int i=0;i<n;i++)
   {
    cin>>m;
    v.push_back(m);
   sum1+=v[i];          
   }
  long double mean1=0.0,mean2=0.0;
   mean1 = sum1/float(n);
   mean1 = (int)(mean1*100000.0)/100000.0;
   cout<<"MEAN1=>"<<mean1<<endl;
   sort(v.begin(),v.end());
   unsigned long long int j,i;
   for(i=0;i<n;i++)
   {
    sum2=0;
    mean2=0.0;
     for(j=0;j<n;j++)
      { 
        if(i!=j)
        {
        sum2=sum2+v[j];      
        }
      }
      
      mean2=sum2/float((n-1));
      mean2 = (int)(mean2*100000.0)/100000.0;
    cout<<"mean2=>"<<mean2<<endl;
      if(mean1 == mean2)
      {
       cout<<"\n found the coin that can be stolen :- "<<i+1<<endl;
       break;
      }
    }
    if(mean1!=mean2)
    {
    cout<<"Impossible\n";
    }
    // end of nested for loop.
    t--;
  }//end of while
    
       
}
   
   
  
    
