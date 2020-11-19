#include <bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
void gettotal(int &res,int i, vector<int> &arr2, int length, int s){
    if (i == length){
        if (s == 0)
            res++;
        return;
    }
    gettotal(res,i + 1, arr2, length, s + arr2[i]);
    gettotal(res , i + 1, arr2, length, s);
}
int getmax(vector<int>& ar){
    return *max_element(ar.begin(),ar.end());
}
int getbits(int value){
    int count =0;
     while (value){
        count++;
        value = value >> 1;
    }
    return count;
}
void countOne(vector<int>& ar,int n,vector<int>& ar2){
     for (int i = 0; i < n; i++){
        while (ar[i]){
            if (ar[i] & 1)
                ar2[i]++;
            ar[i] = ar[i] >> 1;
        }
    }
}
int counting(vector<int>& ar2,int n,int bitsrequied){
    int index =0;
    for (int i = 0; i < n; i++){
        ar2[index] = bitsrequied - 2 * ar2[i];
        if (ar2[index] == 0)
            continue;
        else
            index++;
    }
    return index;
}
int calculate(int x,int n,int index){
    int ans1 =  x * (1 + n - index);
    int ans2 =  (1 << (n - index)) - 1;
    return ans1+ans2;
}
void getbinaryArray(int value , vector<int>& binaryAns){
    int i=0;
    while (value > 0){
        binaryAns[i] = value & 1;
        value = value >> 1;
        i++;
    }
}
int main(){
    int n;
    cin>>n; // number of elements 
    vector<int> ar(n,0);
    for(int i=0;i<n;i++){
        cin>>ar[i]; // input of array 
    }
    int maxvalue = getmax(ar); // getting maximum from array 
    int bitsrequied = getbits(maxvalue); // getting the max bits for getting maximum  bits that will be taken care .
    vector<int> ar2(n,0);
    countOne(ar,n,ar2);//this will store number of ones in ar2 corresponding to every element.
    int index = counting(ar2,n,bitsrequied);
    int final_res =0;
    gettotal(final_res , 0, ar2, index, 0);// this return count number of equal 0's and 1's , calculating subsets
    // cout<<final_res<<endl;//will return 2 for {2,7,10}
    final_res =final_res -  1;
    final_res = calculate(final_res,n,index); // this will give the final answer (3 in case of {2,7,10})
    vector<int> binaryAns(bitsrequied,0);
    getbinaryArray(final_res,binaryAns);// get answer in binaryAns vector 
    for (int j = bitsrequied - 1; j >= 0; j--){
        cout << binaryAns[j];
    }
    return 0;
}