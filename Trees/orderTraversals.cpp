#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *left;
    node *right;
    int data;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data left to " << data << ": " << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data right to " << data << ": " << endl;
    root->right = buildTree(root->right);
    return root;
}

void inorderTraversal(node *root)
{
    node *temp = root;
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
void preorderTraversal(node *root)
{
    node *temp = root;
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}
void postorderTraversal(node *root)
{
    node *temp = root;
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    inorderTraversal(root->right);
    cout << root->data << " ";
}




int main()
{
    node *root = NULL;
    root = buildTree(root);
    inorderTraversal(root);
    cout<<endl;
    preorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
}