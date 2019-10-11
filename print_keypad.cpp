#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void keypad_sq(int num,string match[],string output){
    if(num==0){
        cout<<output<<endl;
        return;
    }
    int temp = num%10;
    string str = match[temp];
    int len =str.size();
   for(int i=0;i<len;i++){
      keypad_sq(num/10,match,str[i]+output);
    }
}
int main(void){
    string output="";
    int num;
    cin>>num;
    string match[10];
     match[2]="abc";
    match[3]="def";
    match[4]="ghi";
    match[5]="jkl";
    match[6]="mno";
    match[7]="pqrs";
    match[8]="tuv";
    match[9]="wxyz";
    keypad_sq(num,match,output);
    
}