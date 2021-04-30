#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
void print_permutation(string s,string output){
    if(s.length() == 0){
        if(output.length() == 0){
            cout<<"null"<<endl;
        }else{
            cout<<output<< "\n";
        }
        return;
    }
    print_permutation(s.substr(1),output);
    print_permutation(s.substr(1),s[0]+output);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    string output;
    print_permutation(s,output);
    return 0;
}