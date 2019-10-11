#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int size,d[100],b[100],a[100];/// the task of a[] will be done by d[] and b[] is my final output array .
void count(int key){
 int c[100];
 for(int i=0;i<=key;i++){
    c[i]=0;
    }
 for(int i=1;i<=size;i++){
    c[d[i]] = c[d[i]]+1;
    }
 for(int i=1;i<=key;i++) {
     c[i]=c[i]+c[i-1];
     }
 for(int i=size;i>=1;i--) {
       b[c[d[i]]] = a[i];
       c[d[i]] = c[d[i]]-1;
      }
 
  for(int i=1;i<=size;i++) {
   a[i]=b[i];
   }
   cout<<endl;
   
  
   
}

int maximum(int ar[]) {
  int max=ar[1];
  for(int i=1;i<=size;i++){ 
      if(max<ar[i]) {
       max=ar[i];
        }
    }
    return max;
}

void make_d(int n) {
    int div=n/10;
    for(int i=1;i<=size;i++) {
    int x  = a[i]/div;
    d[i] = x%10;
     }
     
   
     
}
void radix_sort(int dig) {
   int n=1;
   for(int i=1;i<=dig;i++) {
     n=n*10;
     make_d(n);
     int max = maximum(d);
     count(max);
     }
}
     

// end of loop
int main(void){
  cout<<"enter the size of array \n";
  cin>>size;

  cout<<"enter the elements in the array \n";
  for(int i=1;i<=size;i++) {
     cin>>a[i];
    }
    cout<<"enter the maximum number of digits  \n";
    int dig;
    cin>>dig;
    radix_sort(dig);
   cout<<"at last \n";
   for(int i=1;i<=size;i++) {
   cout<<a[i]<<" => ";
   }
   cout<<"\b"<<endl;
     
}

