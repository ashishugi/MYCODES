#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define pop pop_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
string getBitscore(string);
string getBitscore(string s){
    int maximum = max(s[0],max(s[1],s[2]));
    int minimum = min(s[0],min(s[1],s[2]));
    int max_value = (maximum - '0')*11;
    int min_value = (minimum - '0')*7;
    int res = max_value+min_value;
    string  ans ="";
    for(int i=0;i<2;i++){
        int temp = res%10;
        ans+=to_string(temp);
        res=res/10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int getPairs(int n,string* ar){
    vector<string> pair;
    map<char,int> mp;
    int count =0;
    char ch = '0';
    for(int i=0;i<=9;i++){
        mp[ch]=0;
        ch++;
    }
    for(int i=0;i<n;i++){
        string res = getBitscore(ar[i]);
        pair.push_back(res);
    }
    int size = pair.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(i!=j && pair[i][0] == pair[j][0] && mp[pair[i][0]] < 2){
                if(i%2!=0 && j%2!=0){
                    count++;
                    mp[pair[i][0]]++;
                }else if(i%2==0 && j%2==0){
                    count++;
                    mp[pair[i][0]]++;
                }
            }
        }
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string* ar = new string[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ans = getPairs(n,ar);
    cout<<ans<<endl;
    return 0;
}