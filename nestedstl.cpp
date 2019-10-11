#include<iostream>
#include<map>
#include<vector>
#include<list>
using namespace std;
int main(void){
  cout<<"enter how many elements to be entered"<<endl;
  int n;
  cin>>n;
  map< int  , list<int> > mp;
  cout<<" enter the elements"<<endl;
  for(int i=0;i<n;i++){
      int num;
      cin>>num;
      mp[num].push_back(i);
}
cout<<"now traversing the map"<<endl;
  map< int  , list <int> >::iterator itr = mp.begin();
    map< int  , list <int> >::iterator itr1= mp.begin();

  for(;itr!=mp.end();itr++){
      cout<<itr->first<<" =>";
      for(int j=0;j<mp[itr->first].size();j++){
        cout<<" "<<mp[itr->first].front();
      }
      cout<<endl;
  }

     
}
