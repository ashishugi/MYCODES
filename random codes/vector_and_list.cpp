#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main(void)
{

    vector<char> v;
   
    v.push_back('a');
    v.push_back('b');
    cout<<v.size()<<endl;
    cout<<sizeof(v)<<endl;
    vector<char>:: iterator itr;
    itr = v.begin();
    cout<<*itr<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    {
    cout<<*itr<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    itr = v.end();
    for(itr=v.end();itr!=v.begin();itr--)
    {
    cout<<*itr<<" ";
    }
   
    cout<< endl;
   cout<<"Now for the list it comes\n";
    list<int> l;
    l.push_back(2);
    l.push_back(1);
    list<int>::iterator it = l.begin();
    it = l.begin();
    for(;it!=l.end();it++)
    {
    
     cout<<*it<<" " ;
     }
     cout<<endl;
     it = l.end();
     for(;it!=l.begin();it--)
    {
    
     cout<<*it<<" " ;
     }
     cout<<endl; 
                                                         ;  
    
 
    
    
    
    
}
  
