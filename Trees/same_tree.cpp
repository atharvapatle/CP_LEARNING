#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *l;
    node *r;

    node(int d)
    {
        this->l = NULL;
        this->data = d;
        this->r = NULL;
    }
};

node *buildTree(node *temp)
{
    cout << "Enter data: ";
    int data;
    cin >> data;
    temp = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the value left to: " << data << ": "<<endl;
    temp->l = buildTree(temp->l);
    cout << "Enter the value right to: " << data << ": "<<endl;
    temp->r = buildTree(temp->r);
    return temp;
}

bool isSymetric(node *ls,node* rs)
{
    if (ls==NULL and rs==NULL  )
    {
        return true;
    }
    if (ls==NULL and rs!=NULL  )
    {
        return false;
    }
    if (ls!=NULL and rs==NULL  )
    {
        return false;
    }

    bool lft=isSymetric(ls->l,rs->r);
    bool rht=isSymetric(ls->r,rs->l);
    return ((ls->data==rs->data) and (lft and rht));
    
}

int main()
{
    node *root;
    root = buildTree(root);
    if(isSymetric(root->l,root->r)){
        cout<<"Symmetric";
    }
    else cout<<"Unsymmetric";
}
