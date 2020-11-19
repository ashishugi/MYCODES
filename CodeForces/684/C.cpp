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
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
void convert(string *ar,int row,int col){
    vector<pair<int,int>> res;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            pair<int,int> coor;
            int count=0;
            if(ar[i][j] == '1'){
                if(j+1<col && ar[i][j+1]=='1'){
                    coor.first = i;
                    coor.second = j+1;
                    res.push_back(coor);
                    ar[i][j+1] = '0';
                    count++;
                }else if(j+1<col && ar[i][j+1]=='0'){
                    coor.first = i;
                    coor.second = j+1;
                    res.push_back(coor);
                    coor.first = i;
                    coor.second = j+1;
                    res.push_back(coor);
                    ar[i][j+1]='0';
                    count++;
                }
                if(i+1<row && ar[i+1][j] == '1'){
                    coor.first = i+1;
                    coor.second = j;
                    res.push_back(coor);
                    ar[i+1][j] = '0';
                    count++;
                }else if(i+1<row && ar[i+1][j]=='0'){
                    coor.first = i+1;
                    coor.second = j;
                    res.push_back(coor);
                    coor.first = i+1;
                    coor.second = j;
                    res.push_back(coor);
                    ar[i+1][j]='0';
                    count++;
                }
                // filling it self
                coor.first = i;
                coor.second = j;
                res.push_back(coor);
                if(count<2){ // it means we have opposite pattern 

                }
            }
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string* ar = new string[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        vector<pair<int,int>> res = convert(ar);
        int limit = res.size();
        limit = limit/6;
        int index =0;
        for(int i=0;i<limit;i++){
            for(int j=0;j<6;j++,index++){
                cout<<res[i].first<< " "<<res[i].second<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
