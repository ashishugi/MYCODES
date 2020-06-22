#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
struct node{
    node* left;
    node* right; 
    int value;
};
node *root = NULL;
node* insert(node *root,int val){
    node* nw = new node();
    nw->left=NULL;
    nw->right=NULL;
    nw->value=val;
    if(root == NULL){
        return nw;
    }else if(val > root->value){
        root->right=insert(root->right,val);
    }else{
        root->left=insert(root->left,val);
    }
    return root;
}
void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->value<<" ";
        inorder(root->right);
    }
   // cout<<"\n";
}
void level_order(node* root){ // BFS
    queue<node*> q;
    if(root == NULL){
        cout<<"insert some values in the bst first"<<endl;
    }else{
        q.push(root);
        while(!q.empty()){
            node* check =(q.front());
            cout<<(q.front()->value)<< " ";
            q.pop();
            if(check->left!=NULL){
                node* temp=check->left;
                q.push(temp);
            }
            if(check->right!=NULL){
                node* temp = check->right;
                q.push(temp);
            }
        }
    }

}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int nodes;
    cout<<" enter the number of nodes"<<endl;
    cin>>nodes;
    while(nodes--){
        int value;
        cin>>value;
        root = insert(root,value);
    }
    cout<<"the traversal of the tree is below "<<endl;
    inorder(root);
    cout<<"\n";
    level_order(root);
    return 0;
}