#include<bits/stdc++.h>
#include<map>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
	int t;
	int n,m;
	cin>>t;
	while(t--){
        cin>>n>>m;
	    int* f=new int[n];
	    loop(i,n){
		    cin>>f[i];
	    }
	    map<int,int> final_array;
	    loop(i,n){
		    int price;
		    cin>>price;
		    final_array[f[i]]+=price;
	    }
	    int get_min = INT_MAX;
        // cout<<"values are"<<endl;
        // for(auto x: final_array){
        //     cout<<x.first<< " "<<x.second<<endl;
        // }
        // cout<<" output is"<<endl;
        for(auto x: final_array){
            if(get_min > x.second){
                get_min = x.second;
            }
        }
        cout<<get_min<<endl;
    }
    return 0;
}