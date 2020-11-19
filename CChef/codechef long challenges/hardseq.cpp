#include<bits/stdc++.h>
using namespace std;
int check(int *ar , int size){
    int index=0;
    int flag=0;
    for(int i=size-1;i>=0;--i){
        if(ar[size] == ar[i]){
            flag=1;
            index=i;
            break;
        }
    }
    if(flag==1){
        return index;
    }
    else{
        return 0;
    }

}
int get(int *ar , int size ,int value){
    int count=0;
    for(int i=1;i<=size;++i){
        if(value == ar[i]){
            count++;
        }
    }
return count;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *ar = new int[n+5];
        ar[0] = 0;
        ar[1]=0;
        for(int i=0;i<n;i++){
            int index = check(ar,i);
            if(index!=0){
                ar[i+1] = abs(i-index);
            }
            else{
                ar[i+1] = 0;
            }
        }


      //  for(int i=1;i<=n;i++){
       //     cout<<ar[i]<<" " ;
       // }
        int ans = get(ar,n , ar[n]);
  //  cout<<endl;
        cout<<ans<<endl;
    }


}