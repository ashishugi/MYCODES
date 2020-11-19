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
void push1(int& top1,int& top2 , int* ar,int value,int n){
    if(top1+ 1 == top2){
        cout<<"OverFlow !!"<<endl;
        exit(1);
    }else{
        top1=top1+1;
        ar[top1] = value;
        cout<<"Inserted successfully "<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<< " ";
    }
    cout<<endl;
    return;
}
void push2(int& top1,int& top2 , int* ar,int value){
    if(top2-1 == top1){
        cout<<"OverFlow !!"<<endl;
        exit(1);
    }else{
        top2=top2-1;
        ar[top2] = value;
        cout<<"Inserted successfully "<<endl;
    }
    return;
}
void pop1(int& top1,int* ar){
    if(top1 == -1){
        cout<<"UnderFlow !!!"<<endl;
        exit(1);
    }else{
        cout<<ar[top1]<< " : Item Deleted ";
        top1=top1-1;
    }
    return;
}
void pop2(int& top2,int* ar,int n){
    if(top2 == n){
        cout<<"UnderFlow !!!"<<endl;
        exit(1);
    }else{
        cout<<ar[top2]<< " : Item Deleted ";
        top2=top2+1;
    }
    return;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        ar[i] = 0;
    }
    int top1 =-1;
    int top2 = n;
    char ch='y';
    while(ch == 'y'){
        cout<<"Enter you choice \n 1-> Insert in stack1 \n 2->Insert in stack 2 \n 3-> Delete from stack 1 \n 4-> Delete from stack 2"<<endl;
        int choice;
        cin>>choice;
        if(choice == 1){
            cout<<"enter value to be inserted"<<endl;
            int value;
            cin>>value;
            push1(top1,top2,ar,value,n);
        }else if(choice ==2 ){
            cout<<"enter value to be inserted"<<endl;
            int value;
            cin>>value;
            push2(top1,top2,ar,value);
        }else if (choice == 3){
            pop1(top1,ar);
        }else if(choice == 4){
            pop2(top2,ar,n);
        }
        cout<<"Want to Continue again y/n";
        cin>>(ch);
    }
    return 0;
}