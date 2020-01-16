#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int subsq(string input , string output[]){
    if(input.size()==0){
        output[0]=" ";
        return 1;
    }
    int outsize = subsq(input.substr(1),output);
    for(int i=0;i<outsize;i++){
        output[i+outsize]=input[0]+output[i];
    }
    return outsize*2;

}
int main(void){
   string str;
   cout<<"Enter the string "<<endl;
   cin>>str;
   int len = str.length();
   int size=pow(2,len);
   string output[size];
   int outputsize = subsq(str,output);
   for(int i=0;i<outputsize;i++){
       cout<<output[i]<<endl;
   }
   

}