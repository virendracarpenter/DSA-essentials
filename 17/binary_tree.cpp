#include<iostream>
#include<queue>
using namespace std;

class Node{

public:
  int data;
  Node * left;
  Node * right;

  Node(int d):data(d),left(NULL),right(NULL){};

};

// Preorder Build of the Tree Root, Left, Right Tree

Node * buildTree(){

  int d;
  cin >> d;

  if(d==-1){
    return NULL;
  }

  Node* n = new Node(d);
  n->left = buildTree();
  n->right = buildTree();
  return n;

}

void printPreorder(Node * root){
  if(root==NULL){
    return;
  }

  cout << root->data <<" ";
  printPreorder(root->left);
  printPreorder(root->right);
}

void printInorder(Node * root){
  if(root==NULL){
    return;
  }
  printInorder(root->left);
  cout<<root->data<<" ";
  printInorder(root->right);
}

void postOrder(Node * root){
  if(root==NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}
/*
 * TODO: Element Level Order Traversal
 * Expected Output
 *
 * 1
 * 2 3
 * 4 5 6
 * 7
 */

void levelOrderPrint(Node * root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* temp = q.front();
    if(temp==NULL){
      cout<<endl;
      q.pop(); 
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      q.pop();
      if(temp->left){
        q.push(temp->left);
      }
      if(temp->right){
        q.push(temp->right);
      }
    }
  }
  return;
}

// TODO: Implement Level Order Build for the tree 

Node * levelOrderBuild(){
  
  int d;
  cin >> d;

  Node * root = new Node(d);
  queue<Node*> q;
  q.push(root);

  while(!q.empty()){
    Node * current = q.front();
    q.pop();

    int c1, c2;
    cin >> c1 >> c2;
    
    if(c1!=-1){
      current->left = new Node(c1);
      q.push(current->left);
    }
    if(c2!=-1){
      current->right = new Node(c2);
      q.push(current->right);
    }
  }
  return root;
}

// Helper Function : Height of the Tree

int height(Node* root){
  if(root == NULL)
    return 0;
  int hl = height(root->left);
  int hr = height(root->right);
  return 1 + max(hl,hr);
}

int diameter(Node* root){
  if(root==NULL)
    return 0;
  int D1 = height(root->left) + height(root->right);
  int D2 = diameter(root->left);
  int D3 = diameter(root->right);

  return max(D1,max(D2,D3));
}

int main(){

  Node * root = buildTree();
  levelOrderPrint(root);
  //printPreorder(root);

  return 0;
}
