#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
bool is_vowel(char a){
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='y'){
        return true;
    }
    return false;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    string res="";
    int len = s.length();
    for(int i=0;i<len;i++){
        char ch = tolower(s[i]);
       if(!is_vowel(ch)){
            
            res=res+'.'+ch;
        }
    }
    cout<<res<<endl;
    return 0;
}