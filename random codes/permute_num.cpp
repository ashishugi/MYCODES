#include<bits/stdc++.h>
using namespace std;
void  permute(string num,string output){
    if(num.length()==0){
            cout<<output<<endl;
             return; 
        }
        permute(num.substr(1),output);
        permute(num.substr(1),output+num[0]);


}
int main(void){
   string num;
    cin>>num;
   string output;
    permute(num,output);
  

}