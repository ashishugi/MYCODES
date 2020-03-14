#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int palin_subseq(string s,int start , int end){
  if(start == end){
    return 1;
  }
  if(start > end){
    return 0;
  }
  if(s[start] == s[end]){
    return 2+palin_subseq(s , start+1 ,end-1);
  }
  int ans =0 ;

  if(s[start]!=s[end]){
    ans =  max ( palin_subseq(s,start , end-1) , palin_subseq(s,start+1,end) );
  }
  return ans ;
}
int main(void){
    string s;
    cin>>s;
    int len  = s.length();
    cout<<palin_subseq(s , 0,len-1)<<endl;
  return 0;
}