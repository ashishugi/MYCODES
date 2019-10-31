#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    vector< pair<int ,int> > interval;
    for(int i=0;i<n;i++){
        long long temp1,temp2;
        cin>>temp1 >> temp2;
        interval.push_back({temp2,temp1});
    }
    sort(interval.begin(),interval.end());
   int count=1;
   int max =0;
   cout<<"below"<<endl;
   auto itr = interval.begin();
   for(;itr!=interval.end();itr++){
       cout<<itr->first<< " "<<itr->second<<endl;
   }
  auto x = interval.begin();
  int cmpend = x->first;
  x++;
     cout<<"below"<<endl;

  for(;x!=interval.end();x++){
      if(cmpend <= (x->second)){
          count++;
          cmpend = x->first;
      }
  }
  cout<<"answer is "<<count<<endl;
}
