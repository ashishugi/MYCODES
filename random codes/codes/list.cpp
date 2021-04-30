#include<bits/stdc++.h>
#include<vector>
#include<list>
#define pb push_back
using namespace std;
bool compare(vector<int>& a,vector<int>& b ){
    return a[0] > b[0];
}
void getans(vector<vector<int>>& ar){
    sort(ar.begin(),ar.end(),compare);
    cout<<" next \n";
    list<list<int> > ans;
    int row = ar.size();
    for(int i=0;i<row;i++){
        cout<<ar[i][0]<< " "<<ar[i][1]<<endl;
    }
    list<int> l;
    l.pb(ar[0][0]);
    l.pb(ar[0][1]);
    ans.push_back(l);
    for(int i=1;i<row;i++){
        int pos = ar[i][1];
        list<list<int>>::iterator it = ans.begin();
        int count = 0;
        list<int> l;
        l.pb(ar[i][0]);
        l.pb(ar[i][1]);
        bool flag = false;
        for(;it!=ans.end();it++){
            if(count == pos){
                for(auto x : l){
                    cout<<x<< " ";
                }
                cout<<endl;
                flag = true;
                ans.insert(it,1,l);
                break;
            }
            count++;
        }
        if(flag == false){
            ans.pb(l);
        }
        
    }
    cout<<"=> \n";
    for(auto x : ans){
        for(auto y : x){
            cout<<y<< " ";
        }
        cout<<endl;
    }
}
int main(void){
    int row;
    cin>>row;
    vector<vector<int> > ar;
    for(int i=0;i<row;i++){
        vector<int> temp;
        int dt,end;
        cin>>dt>>end;
        temp.pb(dt);
        temp.pb(end);
        ar.pb(temp);
    }
    getans(ar);
    return 0;
}