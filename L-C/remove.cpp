#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
typedef long long ll;
string final_str="";
ll answer =INT_MAX;
ll getvalue(string s){
    int len =s.length();
    ll sum=0;
    ll y=1;
    // cout<< " = > "<<s<<endl;
    for(int i=len-1;i>=0;i--){
        ll val = y*(s[i]-'0');
        sum+=val;
        y=y*10;
    }
    return sum;
}
void getmin(string nums,int k ,string output){
    if(k == 0){
        output+=nums;
        ll value = INT_MAX;
        if(output.size()>=1){
            value = getvalue(output);
        }
       // cout<<"when k==0"<<"output : "<<output <<"ans value :"<< value <<"\n";
        if(answer > value){
            answer = value;
            final_str = output;
        }
        return;
    }
    if(nums.length() == 0){
         output+=nums;
        ll value = INT_MAX;
        if(output.size()>=1){
            value = getvalue(output);
        }
      //  cout<<"when len == 0" <<output << " \n";
        if(answer > value){
            answer = value;
            final_str = output;
        }
        return;
    }
    getmin(nums.substr(1), k-1,output ); // del.
    getmin(nums.substr(1),k,output+nums[0]); // not del .
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int k;
    cin>>s>>k;
    string output = "";
    getmin(s,k,output);
    cout<<"final answer " << final_str<<endl;
    cout<<"answer "<<answer<<endl;
    return 0;
}