# include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main(void){
   int t;
   cin>>t;
   while (t--)
   {
       int n , m;
       cin >> n >> m;
       vector< int > vec;
       vector< pair < int , int > > interval;
       for(int i=0;i<n;i++){
           int in1,in2;
           cin >> in1 >> in2;
           interval.push_back(make_pair(in1,in2));
       }
       for(int i=0;i<m;i++){
           int temp;
           cin>>temp;
           vec.push_back(temp);
       }
       sort(interval.begin(),interval.end());
       for(int i=0;i<m;i++){
           int low = lower_bound(interval.begin(),interval.end(),make_pair(vec[i],0)) - interval.begin();
           if(low == 0){
               cout<<interval[0].first-vec[i]<<endl;
           }
         else if(interval[low-1].second <= vec[i] && low!=interval.size()){
             cout<<interval[low].first - vec[i]<<endl;
         }
         else {
             if(interval[low-1].second > vec[i]){
                 cout<<"0"<<endl;
             }
             else{
                 cout<<"-1"<<endl;
             }
         }
       }
       
       cout<<endl;
   }
   return 0;
}