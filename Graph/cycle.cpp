#include <bits/stdc++.h>
//If amount of data to input is unknown then
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#include <vector>
#define pb push_back
#define loop(i, s, e) for (int i = s; i < e; i++)
using namespace std;
bool FLAG=false;
void check(vector<vector<int>>& edges,int st,int n,vector<bool>& visited){
    visited[st] = true;
    for(int i=0;i<edges[st].size();i++){
        int temp = edges[st][i];
        if(!visited[temp]){
            check(edges,temp,n,visited);
        }else{
            FLAG=true;
        }
    }
    visited[st] = false;
}
bool detect(int n, vector<vector<int>> &edges)
{
    for (int i = 0; i < n; i++)
    {   vector<bool> visited(n,false);
        check(edges,i,n,visited);
        if(FLAG){
            return true;
        }
    }
    return false;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, e;
    cin >> n >> e;
    vector < vector<int> > edges(n);
    for (int i = 0; i < e; i++)
    {
        int st;
        int end;
        cin >> st >> end;
        edges[st].pb(end);
    }
    if (detect(n, edges))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}