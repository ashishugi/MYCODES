#include<bits/stdc++.h>
using namespace std;
class trie{
    public:
    trie* left;
    trie* right;
};
void insert(trie* head,int n){
    trie* curr = head;
    for(int i=31;i>=0;i--){
        int b=n&(1<<i);
        if(b==0){
            if(!curr->left){
                curr->left=new trie();
            }
            curr=curr->left;
        }else{
            if(!curr->right){
                curr->right=new trie();
            }
            curr=curr->right;
        }
    }
}
int maxxor(trie* head,int n,int* ar){
    int max_xor=INT_MIN;
    for(int i=0;i<n;i++){
        int value = ar[i];
        trie* curr = head;
        int curr_xor=0;
        for(int j=31;j>=0;j--){
            int b=value&(1<<j);
            if(b==0){
                if(curr->right){
                    curr_xor+=pow(2,j);
                    curr=curr->right;
                }else{
                    curr=curr->left;
                }
            }else{
                if(curr->left){
                    curr_xor+=pow(2,j);
                    curr=curr->left;
                }else{
                    curr=curr->right;
                }
            }
        }
        if(max_xor < curr_xor){
            max_xor=curr_xor;
        }
    }
    return max_xor;
}
int main(void){
    int n;
    cin>>n;
    trie* head = new trie();
    int* ar=new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        insert(head,ar[i]);
    }
    cout<<maxxor(head,n,ar)<<endl;
    return 0;
}