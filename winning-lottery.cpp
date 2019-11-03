#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int s;
    cin>>s;
    int d;
    cin>>d;
    int *ar = new int[d+1];
    ar[0]= 1;
    s--;
    int temp = s;
    int var=9;
    for(int i=d-1;i>0;){
        if(temp >= var){
            ar[i] = var;
            temp -=var;
            --i;
        }
        else{ 
         var--;
        }
    }
    for(int i=0;i<d;i++){
        cout<<ar[i];
    }
    

}