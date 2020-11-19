#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<list>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int maxsize = 4;
list<int> cache;
unordered_map<int,list<int>::iterator> mp;
void LRU(int value){
    bool flag = false;
    list<int>::iterator itr = cache.begin();
    for(;itr!=cache.end();itr++){
        // cout<<(itr)<<endl;
        if(value == (*itr)){
            flag = true;
            break;
        }
    }
    if(maxsize == cache.size()){
        if(flag){
            cache.erase(itr);
            cache.push_front(value);
        }else{
            itr -- ;
            cache.push_back(value);
            cache.push_front(value);
        }
    }else{
        if(flag){
            cache.erase(itr);
            cache.push_front(value);
        }else{
            cache.push_front(value);
        }
    }
    // print the cache 
    for(auto x : cache){
        cout<<x<< " ";
    }
    cout<<endl;
}
void LRU1(int value){
    bool flag = false;
    if(mp.find(value)!=mp.end()){
        if(cache.size() == maxsize){
            int delVal = cache.back();
            cache.pop_back();
            mp.erase(delVal);
        }else{
            cache.erase(mp[value]);
            mp.erase(value);
        }
    }else{
        if(cache.size() == maxsize){
            int delVal = cache.back();
            cache.pop_back();
        }
    }
    cache.push_front(value);
    mp[value] = cache.begin();
    for(auto x : cache){
        cout<<x<< " ";
    }
    cout<<endl;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    // vector<int> ar(n,0);
    // for(int i=0;i<n;i++){
    //     cin>>ar[i];
    // }
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        LRU1(value);
    }
    return 0;
}