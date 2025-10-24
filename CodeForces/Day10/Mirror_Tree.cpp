#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node{
  public:
  Node *left,*right;
  int data;
  Node(int val){
    data=val;
    left=right=NULL;
  }
};
Node* BinaryTree(){
  
  int val;
  cin>>val;
  if(val==-1){
    return NULL;
  }
  Node *temp = new Node(val);
  cout<<"Enter the left child of "<<temp->data<<": ";
  temp->left = BinaryTree();
  cout<<"Enter the right child of "<<temp->data<<": ";
  temp->right = BinaryTree();
  return temp;
}
void pre(Node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  pre(root->left);
  pre(root->right);
}
void level(Node* root){
  queue<Node*>q;
  q.push(root);
  while(!q.empty()){
    Node* temp  = q.front();
    q.pop();
    cout<<temp->data<<" ";
    if(temp->left) q.push(temp->left);
    if(temp->right) q.push(temp->right);
  }
}
void  mirror(Node* &root){
  if(root==NULL)
  return;
  Node*temp = root->left;
  root->left = root->right;
  root->right = temp;
  mirror(root->left);
  mirror(root->right);
}
int main(){
  cout<<"Enter the value of root Node: ";
  Node* root = BinaryTree();
  level(root);
  mirror(root);
  level(root);
}

