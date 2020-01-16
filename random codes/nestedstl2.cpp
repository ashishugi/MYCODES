#include<iostream>
#include<map>
#include<vector>
#include<list>
using namespace std;
int main(void){
  int n;
  cin>>n;
  map< int  , vector<int> , greater<int> > mp;
  for(int i=0;i<n;i++){
      int num;
      cin>>num;
     mp[num].push_back(i);
}
int k;
cin>>k;
  map< int  , vector <int> >::iterator itr = mp.begin();
  for(;itr!=mp.end();itr++){
      k--;
      for(int j=0;j<mp[itr->first].size();j++){
        cout<<mp[itr->first][j]<<" ";
        
      }
      if(k==0){
          break;
      }
      
  }
  cout<<endl;

     
}
