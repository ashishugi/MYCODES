#include<iostream>
using namespace std;
void remove(char * str){ 
    if(str[0]=='\0'){
     return;
     }
     if(str[0]==str[1]){
       int i=1;
       for(;str[i]!='\0';i++){
         str[i-1]=str[i];
         }
         str[i-1]='\0';
        remove(str);
      }
      else{
      remove(str+1);
    }
 }
  int main(void){
  
    char str[30];
    cin>>str;
    remove(str);
    cout<<str<<endl;
   }
     
