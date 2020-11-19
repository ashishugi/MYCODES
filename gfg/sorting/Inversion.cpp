#include<bits/stdc++.h>
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
int mergeSort(int* ,int ,int , int );
int getInversion(int* ar,int n){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i] > ar[j]){
                count++;
            }
        }
    }
    return count;
}
int merge(int* ar,int l,int r){
    int res =0 ;
    if(l<r){
        int mid = (l+r)/2;
        res+=merge(ar,l,mid);
        res+=merge(ar,mid+1,r);
        res+=mergeSort(ar,l,mid,r);
    }
    return res;
}
int mergeSort(int* ar,int l,int mid,int r){
    int len1 = (mid-l)+1; // [1,2,3,4,5,5]
    int len2 = r-mid;
    int* left = new int[len1];
    int* right = new int[len2];
    for(int i=0;i<len1;i++){
        left[i] = ar[l+i];
    }
    for(int i=0;i<len2;i++){
        right[i] = ar[mid+i+1];
    }
    int count =0;
    int i=0,j=0;
    int len = r-l+1;
    int index = l;
    while(i<len1 && j<len2){
        if(left[i] > right[j]){
            count+=(len1-i);
            ar[index] = right[j];
            j++;
        }else{
            ar[index] = left[i];
            i++;
        }
        index++;
    }
    while(i<len1){
        ar[index] = left[i];
        i++;
        index++;
    }
    while(j<len2){
        ar[index] = right[j];
        index++;
        j++;
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    // int countInversion = getInversion(ar,n);
    int countInversion = merge(ar,0,n);
    cout<<countInversion<<endl;
    return 0;
}