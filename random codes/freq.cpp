#include<iostream>
using namespace std;
//#include "solution.h"

   char* uniqueChar(char *str){
    // Write your code here
  int i=0;
    while(str[i]!=' '){
        char ch=str[i];
        int j=i+1;
        while(str[j]!=' '){
            if(ch==str[j] && ch!=0){
                str[j]=0;
                j++;
            }
        }
        i++;
    }
    char *res= new char[i];
    for(int j=0;j<i;j++){
        int k=0;
        if(str[j]!=0){
            res[k]=str[j];
            k++;
        }
    }
    return res;


}
int main() {

	 char input[100000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}

