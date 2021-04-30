#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(void){
     int n;
     int a,b;
     cin >> n >>a >>b;
       int total =0;
       int min = INT_MAX;
     for(int i=0;i<=n;i++){
         int l_sum =0;
         int r_sum =0;
         int num =  n - i;
         l_sum = a*pow(num,2);
         r_sum = b*pow(i,2);
         total = l_sum+r_sum;
         if(min>total){
             min = total;
         }
         //cout<<l_sum<<" "<<r_sum<< " "<<total<<endl;

     }
     cout<<min<<endl;
}