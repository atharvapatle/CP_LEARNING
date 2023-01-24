#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node* root)
{
    cout<<"Enter data: ";
    int data;
    cin>>data;
    root=new node(data);

    if (data==-1)
    {
  
        return NULL;
    }

    cout<<"Enter the data left to "<<data<<": "<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data right to "<<data<<": "<<endl;
    root->right=buildTree(root->right);
    return root;
}

int heightTree(node* root){
    int lft;
    int rht;
    node* temp=root;

    if (temp==NULL)
    {
        return 0;
    }

    lft=heightTree(root->left);
    rht=heightTree(root->right);
    return 1+max(lft,rht);
    
}

int main()
{
    node* root=NULL;
    root= buildTree(root);
    cout<<heightTree(root);
}