#include<bits/stdc++.h>
using namespace std;
int main(void){
     char *res = new char[1000];
     char *input = new char[100];
     cin>>input;
	int i=0,len=0;
    while(input[i]!='\0'){
        i++;
        len++;
    }
    int j=0;
    for(int i=0;i<=len;){
        char ch = input[i];
        res[j]=ch;
        j++;
        while(ch == input[i]){
            i++;
        }
    }
    input = res;
    cout<<input<<endl;
    cout<<res<<endl;
}