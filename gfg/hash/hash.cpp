#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
ll getnumval(int num){
    int sum=0;
    while(num){
        int y = num%10;
        sum+=y;
        num/=10;
    }
    return sum;
}
int PerfectMatch(vector<int> arr, int n) {
    unordered_map<int,vector<int>>  um;
    int size = arr.size();
    for(int i=0;i<size;i++){
        int val = getnumval(arr[i]);
        um[val].push_back(arr[i]);
    }
    ll res =-1;
    for(auto x : um ){
        int sum=INT_MIN;
        vector<int> v = x.second;
        if(v.size()<2){
            continue;
        }else{
            int l1 = v.size();
            sort(v.begin(),v.end());
            sum = v[l1-1]+v[l1-2];
            if(sum > res){
                res = sum;
            }
        }
    }
    return res;
}
int main(void){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<PerfectMatch(arr,arr.size())<<endl;
  return 0;
}