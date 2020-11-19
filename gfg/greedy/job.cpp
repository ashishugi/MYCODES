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

struct Job{
    int deadline ;
    int profit;
};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    Job* ar = new Job[n];
    loop(i,0,n){
        cin>>ar[i].deadline;
        cin>>ar[i].profit;
    }
    return 0;
}