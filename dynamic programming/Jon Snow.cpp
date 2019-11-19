#include <bits/stdc++.h>
#include<map>
using namespace std;
 
int main(){
    int n;
    int k;
    int x;
    cin>>n>>k>>x;
    //map < int , int > ar1 , ar2;
    int ar1[5001] , ar2[5001];
    for(int i=0;i<5001;i++){
        ar1[i] =0;
        ar2[i] =0;
    }
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        ar1[temp]++;
    }
 
    while(k--){
        long long sum =0;
        memset(ar2,0,sizeof(ar2));
        for(int i=0;i<5001;i++){
           
            if(ar1[i]>0){
            if(sum%2==0){
               long index = i ^ x; //int index
            long transfer = (ar1[i]/2); //int transfer
            long remain = ar1[i] - transfer; //int remain
            
           
            ar2[index] = ar2[index]+remain;
                ar2[i] += transfer;
            }
            else{
                //sum =  sum+ar1[i];
                  long index = i ^ x; // int index
                  long transfer = ar1[i]/2; //transfer
            long remain = ar1[i] - transfer; // remain
            ar2[i] += remain;
          
            ar2[index] = ar2[index]+transfer;
                
            }
                
          }
         sum+=ar1[i];
        }
         
      for(int i=0;i<5001;i++){
          ar1[i] = ar2[i];
      }  
 
 
    } // end of while
     int min =INT_MAX;
        int max = INT_MIN;
        for(int i=0;i<=5001;i++){
            if(ar1[i]!=0){
                min = i;
                break;
            }
        }
         for(int i=5000;i>=0;i--){
            if(ar1[i]!=0){
                max = i;
                break;
            }
        }
        cout<<max<< " "<<min<<endl;
    return 0;
}


