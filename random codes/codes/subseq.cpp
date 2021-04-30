#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
void getsubseq(int* ar , int n, vector<vector<int>> &output , int target , vector<int>& values){
    if(n == 0){
        return;
    }
    if(target == 0){
        output.push_back(values);
        values.clear();
        return;
    }
    if(target < 0){
        values.pop_back();
        return;
    }
    getsubseq(ar+1,n-1,output,target,values);
    getsubseq(ar+1,n-1,output,target - ar[0] , values.push_back(ar[0]));
    
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    loop(i,0,n){
        cin>>ar[i];
    }
    cout<<"enter the target to get \n";
    int target;
    cin>>target;
    vector< vector < int > > output;
    vector<int> values;
    getsubseq(ar,n,output,target,values);
    for(int i=0;i<output.size();i++){
        for(int j=0;j<output[i].size();j++){
            cout<<output[i][j] << " ";
        }
        cout<<endl;
    }
    
    return 0;
}