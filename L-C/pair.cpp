#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getNumberPairs(vector<int>& nums , int k){
    map<int , bool > ele;
    for(auto  x : nums){
        ele[x] = false;
    }
    int count  =0 ;
    for(auto x : ele){
        int val = x.first  - k;
        if((ele.find(val)!= ele.end()) && (x.first==false || ele[val]==false)){
            count++;
            ele[x.second] = true;
            ele[val]=true;
            cout<< " inside 1"<<endl;
        }
        val = k - x.first;
        if((ele.find(val)!= ele.end()) && (x.first==false || ele[val]==false)){
            count++;
            ele[x.second] = true;
            ele[val]=true;
            cout<< " inside 2"<<endl;
        }
        for(auto y : ele){
            cout<<y.first<< " "<<y.second<<endl;
        }
        cout<<" next"<<endl;
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> nums;
    loop(i,0,n){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    int k;
    cin>>k;
    int count = getNumberPairs(nums,k);
    cout<<count<<endl;
    return 0;
}