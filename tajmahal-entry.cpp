#include<bits/stdc++.h> 
using namespace std;

int main()
{ long long n,i,j=0;
 long long a[100000],t,b[100000],val,min,pos; 
 cin>>n;
 for(i=0;i<n;i++) 
 { cin>>a[i]; 
    if(a[i]>i)
     { 
      if((a[i]-i)%n==0)
       {
       t=(a[i]-i)/n; 
       } 
    else 
      t=((a[i]-i)/n)+1;
  
      b[j++]=i+(t*n); 
    } 
   else b[j++]=i;
} 
 
    min=b[0];
 for(i=1;i<n;i++)
   { 
     if(b[i]<min) 
    { 
         min=b[i]; pos=i; 
     } 
} 
 cout<<pos+1; return 0;
}
