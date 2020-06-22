#include<bits/stdc++.h>
#include<vector>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
vector<int> getMinMax(int n ,int* ar){
    vector<int> ans;
    int count=1;
    for(int i=1;i<n;i++){
        if(abs(ar[i]-ar[i-1]) <= 2){
            count++;
        }else{
            ans.push_back(count);
            count=1;
        }
    }
    ans.push_back(count);
    // cout<<"here";
    // for(auto x : ans){
    //     cout<<x<<  " ";
    // }
    // cout<<endl;
    return ans;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* ar = new int[n];
        loop(i,0,n){
            cin>>ar[i];
        }
        vector<int> res = getMinMax(n,ar);
        int mini = *min_element(res.begin(),res.end());
        int maxi = *max_element(res.begin(),res.end());
        cout<<mini<< " "<<maxi<<"\n";
    }
    return 0;
}