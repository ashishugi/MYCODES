#include<iostream>
using namespace std;
int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
       
        int final_count=0;
       
        for(int i=0;i<n;i++){
            int flag=1;
            int count=0;
            int j = i-1;
           while(j>=0){
               if(ar[i]<ar[j]){
                   count++;
                   j--;
                //  cout<<ar[i]<< " "<<ar[j]<<" i and j"<<i<<" "<<j<<endl;
               }
               else{
                   flag=0;
                   break;
                }
           }
         
           if(count>=5  || flag==1){
            //   cout<<"at"<<ar[i]<<endl;
               final_count++;
           }
        }
        cout<<final_count<<endl;


    }
}