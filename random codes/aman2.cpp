#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<list>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    list<int> ar;
    for(int i=0;i<n;i++){
        int temp;
        cin>> temp;
        ar.push_back(temp);
    }
    list<int>::iterator it1 ,it2;
    it1 = ar.begin();
    it2 = ar.begin();
    it2++;
    for(;it1!=ar.end() && it2!=ar.end();){
        cout<<(*it1)<< " "<<(*it2)<<endl;
        if((*it1) >= 0 && (*it2 <  0)  || ((*it1 < 0 && *it2>=0))){
            // if((*it1) >= 0 && (*it2 <  0)){
                if(abs(*it1) > abs(*it2)){
                    cout<<(*it2)<<" "<<endl;
                    ar.erase(it2);
                   // it2++;
                }else if(abs(*it1) < abs(*it2)){
                    cout<<(*it1)<< " "<<endl;
                    ar.erase(it1);
                  //  it1++;
                }else if(it1!=it2){
                    ar.erase(it1);
                    ar.erase(it2);
                    // it1++;
                    it2++;                
                }
        }else{
            it1++;
            it2++;
        }
    }
    return 0;
}