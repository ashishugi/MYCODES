#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool possible(int temp[],int size , int mid,int money){
        if((money-temp[mid])>=0){
            return true;
        }
        return false;
}
int main(void){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int q;
    cin>>q;
   // sort(ar,ar+n);
    int temp[n];
    temp[0]=ar[0];
    for(int i=1;i<n;i++){
        temp[i]=ar[i]+temp[i-1];
    }
    while(q--){
        int money ;
        cin >> money;
        int min = 0;
        int max = n-1;
        int index =0 ;
        while (min<=max)
        {
            int mid = (min+max)/2;
            if(possible(temp,n,mid,money)){
                min = mid+1;
                index = mid;
            }
            else{
                max = mid-1;
            }
        }
        cout<<index+1 << " "<<money-temp[index]<<endl;
       
        

    }
}