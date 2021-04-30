#include<iostream>
using namespace std;
int keysub(int input,string output[],string match[]){
    if(input==0){
        output[0]=" ";
        return 1;
    }
    int outputsize = keysub(input/10,output,match);
    int curr_num = input%10;
    string temp = match[curr_num];
    int len = temp.length();
     int resultsize=0;
    for(int i=0;i<len;i++){
       for(int j=0;j<outputsize;j++){
            output[j+resultsize]=output[j];
        }
        resultsize=resultsize+outputsize;
    }
    resultsize=0;
     for(int i=0;i<len;i++){
       for(int j=0;j<outputsize;j++){
            output[j+resultsize]=output[j+resultsize]+temp[i];
        }
        resultsize=resultsize+outputsize;
    }
    
   return resultsize;

}
int main(void){
    string output[100];
    int input;
    cout<<"enter the number"<<endl;
    cin>>input;
    string match[10];
    match[2]="abc";
    match[3]="def";
    match[4]="ghi";
    match[5]="jkl";
    match[6]="mno";
    match[7]="pqrs";
    match[8]="tuv";
    match[9]="wxyz";
    int outsize = keysub(input,output,match);
    for(int i=0;i<outsize;i++){
        cout<<output[i]<<endl;

    }

}