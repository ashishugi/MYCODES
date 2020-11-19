#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#include<vector>
#define loop(i,s,e) for(int i=s;i<e;i++)
#define pb push_back

using namespace std;

bool check(vector<vector<int>>& ar){
    int size = ar.size();
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<size;j++){
            sum += ar[j][i];
        }
        if(sum!=0){
            return false;
        }
    }
    return true;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int sum =0;
    vector<vector<int>> ar;
    while(n--){
        vector<int> temp;
        int a,b,c;
        cin>>a>>b>>c;
        temp.pb(a);
        temp.pb(b);
        temp.pb(c);
        ar.pb(temp);
    }
    if(check(ar)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}