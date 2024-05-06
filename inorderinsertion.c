#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node*right;
struct node *left;

};
 struct node *newnode(int value){
  struct node*temp=malloc(sizeof(struct node));
  temp->data=value;
  temp->right=NULL;
  temp->left=NULL;
  return temp;
 }

 void inorder(struct node*root){
 if(root!=NULL){
  inorder(root->left);
  printf("%d->",root->data);
  inorder(root->right);
 }

 }

 struct node*insert(struct node*node,int data){

if(node==NULL)
return newnode(data);
if(data<node->data)
node->left=insert(node->left,data);
else
node->right=insert(node->right,data);
return node;
 }
 int main(){
  struct node*root=NULL;
  root=insert(root,1);
  root=insert(root,5);
  root=insert(root,4);
  root=insert(root,10);
  root=insert(root,9);
  root=insert(root,8);
  printf("Inorder traversal:");
  inorder(root);
 }
