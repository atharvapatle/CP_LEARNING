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

void printLeaf(node* root){
    node* temp=root;
    if (temp->left==NULL & temp->right==NULL)
    {
        cout<<root->data<<" ";
        return;
    }
    printLeaf(root->left);
    printLeaf(root->right);

    
}

int main()
{

    node* root=NULL;
    root= buildTree(root);
    printLeaf(root);
}