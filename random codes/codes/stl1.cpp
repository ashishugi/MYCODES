#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<list>
#include<set>
#include<stack>
#include<queue>
#include<deque>
using namespace std;
int main(void)
{
 /***************************  Vectors ********************************/
 /* vector<int> v;
  int n;
      vector<int>::iterator itr;
         
  cout<<"Enter the 5 elements \n";
  for(int i=1;i<=5;i++)
  {
   cin>>n;
   v.push_back(n);
   }
    itr = v.begin();
   cout<<"\n the entered elements are \n";
   while(itr!=v.end())
    {
    cout<<*itr<<" " ;
    itr++;
    }
    sort(v.begin(),v.end());

  cout<<" the sorted vectors are \n";
  
   for(itr=v.begin();itr!=v.end();itr++)
   {
    cout<<*itr<<"  ";
    }
    cout<<endl;
    cout<<"enter the number to be searched \n";
    cin>>n;
    cout<<binary_search(v.begin(),v.end(),n);
   vector<char> v;
   char ch;
   cout<<"enter the characters (5)\n";
   for(int i=1;i<=5;i++)
   {
    cin>>ch;
    v.push_back(ch);
    }
    
    vector<char>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
      cout<<*itr<<" ";
      }
      
      cout<<endl;   
   
   
   /************************************* list   *******************************************/
   
  /* list<int> l;
   
   int n;
   cout<<"Enter the 5 elements \n";
  for(int i=1;i<=5;i++)
  {
   cin>>n;
   l.push_back(n);
  }
   
 list<int>::iterator itr;
 
   for(itr = l.begin();itr!=l.end();itr++)
   {
    cout<<*itr<<" ";
    }
    
    
        cout<<endl;
    */
   
 /********************************* Maps *********************************/  
   
   
   /*map<int,int> mp;
   mp[1]=10;
   mp[2]=20;
   mp[4]=30;
   mp[5]=40;
   mp[3]=50;
   mp[6]=600;
   map<int,int>::iterator itr = mp.begin();
   
   mp.insert(make_pair(10,2000));
    
   mp.insert(make_pair(10,5600));
   for(;itr!=mp.end();itr++)
   {
    cout<<itr->first<<" ->"<<itr->second<<endl;
   }
   cout<<endl;
    cout<<"\n now the case of multimap \n";
      multimap<int,int> mm;
        mm.insert(make_pair(1,50));
        mm.insert(make_pair(3,789));
        mm.insert(make_pair(1,200));
        mm.insert(make_pair(1,3789));
  
  
  
    
      multimap<int,int>::iterator it=mm.begin();
     for(;it!=mm.end();it++)
      {
      cout<<it->first<<" -> "<<it->second;
     
      cout<<endl;
      }
      cout<<endl;
   */
  /****************** Unordered Map *****************************/ 
   
   
   
   /*unordered_map<int,int> mp;
   mp[1]=23;
   mp[2]=344;
   mp[1]=0;
   mp[398]=43;
   mp[0]=54;
   mp[2]=2;
   mp[2]=122;
  auto itr = mp.begin();
   for(;itr!=mp.end();itr++)
   {
     cout<<itr->first<<" -> "<<itr->second;
     cout<<endl;
    }
    cout<<"\n";
   */
   
   
   
   // Using erase - remove Idiom
   
   
 /*  vector<int> v;
   v.push_back(10);
   v.push_back(40);
   v.push_back(30);
   v.push_back(12);
   v.push_back(40);
   auto itr = v.begin();
   for(;itr!=v.end();itr++)
   {
    cout<<*itr<<" "<<endl;
    
    }
    cout<<endl;
    v.erase(v.begin()+1,v.begin()+2);
    
    for(itr=v.begin();itr!=v.end();itr++)
   {
    cout<<*itr<<" "<<endl;
    
    }
    cout<<endl;
   
   */
   
   //***************************************** SET'S *****************************************
    
   
  /* set<int,greater<int>> st;
   st.insert(28);
   st.insert(1);
   st.insert(2);
   st.insert(23);
   st.insert(2832);
   st.insert(28);
   st.insert(1);
   st.insert(2);
   st.insert(23);
   st.insert(2832);
    st.insert(5);
   auto itr = st.begin();
   while(itr!=st.end())
   {
   cout<<*itr<<" ";
   itr++;
   }
   cout<<endl;
   
   
   cout<<"Now the case of multiset"<<endl;
   multiset<int,greater<int>> mst;
   mst.insert(28);
   mst.insert(1);
   mst.insert(2);
   mst.insert(23);
   mst.insert(2832);
   mst.insert(28);
   mst.insert(1);
   mst.insert(2);
   mst.insert(23);
   mst.insert(2832);
   mst.insert(5);
   auto it = mst.begin();
   while(it!=mst.end())
   {
    cout<<*it<<" ";
    it++;
    }
    cout<<"\n now the enter the number to be deleted \n";
    int n;
    cin>>n;
    mst.erase(n);
    cout<<"\n Now the resultant set after the deletion\n";
    for(auto val:mst)
    {
     cout<<val<<" ";
     }                 
     cout<<endl;
   */
   
   //****************************** STACK ************************************
   
   
/*  stack<int,list<int>> stk;
   cout<<" Enter the five elements to pushed into the stack ";
   int n;
   for(int i=1;i<=5;i++)
   {
    cin>>n;
    stk.push(n);
    }
    cout<<endl;
    cout<<"the resultant stack is \n";
    
    while(!stk.empty())
    {
    cout<<stk.top();
    stk.pop();
    cout<<" ";
    }
    cout<<endl;



      
    cout<<endl;
    */
    
   //******************************* QUEUE *************************
   /*queue<int> qu;
   int n;
   
   cout<<"enter the 5 elements ";
   for(int i=1;i<=5;i++)
   {
   cin>>n;
   
   qu.push(n);
   }
   cout<<"\n the queue is \n";
   auto itr = &qu.front();
   for(;itr<=&qu.back();itr++)
   {
   cout<<*itr<<" ";
   }
   */
   //******************************* DEQUE ********************************
   
   deque<int> dq;
    int n;
   
   cout<<"enter the 5 elements ";
   for(int i=1;i<=5;i++)
   {
   cin>>n;
   
   dq.push_front(n);
   }
   
   
   auto it = &dq.front();
   for(;it<=&dq.back();it++)
   {
   cout<<*it<<" ";
   }
   cout<<endl;
   
   
   
   
   
   
   
   
   
   
 }
