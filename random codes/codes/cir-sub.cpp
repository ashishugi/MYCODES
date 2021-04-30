#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(void){
    string p,s;
    cin>>p;
    cin>>s;
    int n = p.length();
    int m = s.length();
    vector<int> ans;
    for(int i=0;i<m;i++){
        if(s[i] == p[0]){
            int index = i;
            int j=0;
            while(index<m && j<n){
                if(s[index] == p[j]){
                    j++;
                }
                index++;
            }
            if(j == n){
                ans.push_back((index - i));
            }
        }
    }
   if(ans.size() !=0){
       int steps = *min_element(ans.begin(),ans.end());
       int first =1;
       int second=0;
       if(steps == n){
           second = 0;
       }else{
           second = steps - n;
       }
       cout<<first<< " "<<second<<endl;

   }else{
       cout<<"0"<<endl;
   }

    return 0;
}