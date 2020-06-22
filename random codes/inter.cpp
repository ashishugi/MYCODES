#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
bool check(string s1,string s2,string s3){
    cout<<s1<<  " ,  "<< s2<< " and "<<s3<<endl; 
    if(s1.length() == 0 && s2.length() == 0 && s3.length()==0){
        return true;
    }
    if(s3.length()==0 && (s1.length()!=0 || s2.length()!=0 )){
        cout<<"Inside this one"<<endl;
        return false;
    }
    if(s1[0]==s3[0] && s2[0]==s3[0]){
        return (check(s1.substr(1),s2,s3.substr(1)) || check(s1,s2.substr(1),s3.substr(1)));
    }
    bool ans1 = false,ans2  = false;
    if(s1[0]==s3[0]){
        ans1 = check(s1.substr(1),s2,s3.substr(1));
    }
    else if(s2[0] == s3[0]){
        ans2 = check(s1,s2.substr(1),s3.substr(1));
    }else{
        return false;
         cout<<"Inside this one 2"<<endl;
    }
    return (ans1 || ans2);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    cout<<check(s1,s2,s3)<<endl;
    return 0;
}