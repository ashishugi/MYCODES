//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool anagram(string output  ,string str){
    int len = output.length();
    int
     sort(output.begin(),output.end());
    if(str.length() < output.length()){
        return false;
    }
    for(int i=0;str.length();i++){
        count = 0;
        for(int j=i;j<str.length();j++){
            if(output)
            
        }
    }
    return false;


}
char right_rotate(string& str, int times){
  
    while(times--){
          char ch = str[str.length()-1];
        int i;
        for( i=str.length()-1;i>0;i--){
            str[i] = str[i-1];
        }
        str[0] = ch;
    }
    return str[0];

}
char left_rotate(string& str, int times){
   
    while(times--){
         char ch = str[0];
         int i;
      for( i=0;i<str.length()-1;i++){
          str[i]=str[i+1];
      }
      str[i]=ch;
   }
   
    return str[0];
}
int main(void){
    string str;
    cin >> str;
    int q;
//    cin >> q;
//    string output;
//     while(q--){
//         char ch;
//         cin >> ch;
//         int times;
//         cin >> times;
//         if(ch == 'L'){
//            char character =  left_rotate(str,times);
//            output = output + character;
           
//         }
//         else if(ch == 'R'){
//             char character = right_rotate(str,times);
//             output = output+character;
//         }
//     }
//     if(anagram(str,output)){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
//     int times;
//     cin >> times;
    cout<<anagram(str,"ansnj")<<endl;
  // cout<<str<<endl;


}