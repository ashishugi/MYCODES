#include<bits/stdc++.h>
using namespace std;
class tries{
    public:
    tries* right;
    tries* left;
};
void insert(tries* head ,int n){
    tries* curr = head;
    for(int i=31;i>=0;i--){
        int b=n&(1<<i);
        if(b==0){
            if(!curr->left){
                curr->left = new tries();
            }
            curr=curr->left;
        }else{
            if(!curr->right){
                curr->right = new tries();
            }
            curr=curr->right;
        }
    }
}
int query(tries* head,int* ar,int n,int k){
    insert(head,0);
    int final_count=0;
    int pre_xor=0;
    for(int i=0;i<n;i++){
        tries* curr = head;
        int curr_xor =0;
        pre_xor = pre_xor ^ ar[i];
        insert(head , pre_xor);
        for(int j=31;j>=0;j--){
            int b=pre_xor&(1<<j);
            if(b==1){
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
        if(curr_xor <  k){
            final_count++;
        }

    }
    return final_count;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        tries* head = new tries();
        int* ar=new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            //insert(head,ar[i]);
        }
        cout<<query(head,ar,n,k)<<endl;
    }
    return 0;
}