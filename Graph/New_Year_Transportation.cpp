#include<bits/stdc++.h>
using namespace std;
int main()
{
	//code
    int n;
    int t;
    cin>>n>>t;
    t--;
    int* ar = new int[n];

    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        x--;
        ar[i] = x;
    }
    int flag =0 ;
    for(int i=0;i<n-1;i++){
        if(i==t){
            flag=1;
            break;
        }
        else if(i > t){
            break;
        }
        i = ar[i]+i;
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


	return 0;
}
