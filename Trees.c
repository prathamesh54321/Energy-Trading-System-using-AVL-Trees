#include<stdio.h>
#include "Trees.h"

tr_node* rightRotate(tr_node* y)
{
  tr_node*temp=r;
  if(r==NULL)
  {
    printf("Empty Node r");
  }
  else if(r->left==NULL)
  {
    printf("Cannot Rotate ....");
  }
  else{
    temp=r->left;
    r->left=temp->right;
    temp->right=r;
  }
  return temp;
}

tr_node* leftRotate(tr_node* x)
{
   tr_node*temp=r;
  if(r==NULL)
  {
    printf("Empty Node r");
  }
  else if(r->right==NULL)
  {
    printf("Cannot Rotate ....");
  }
  else{
    temp=r->right;
    r->right=temp->leftt;
    temp->leftt=r;
  }
  return temp;
}
