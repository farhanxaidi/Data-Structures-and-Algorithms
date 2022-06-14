#include "BST.h"

void BST::insert(int val)
{
    insert(root, val);
}
void BST::insert(node* & r,int val)
{
    if (r == nullptr)
    {
        r = new node;
        r->data = val;
        r->left = nullptr;
        r->right = nullptr;
        return;
    }
    if (r->data > val)
    {
        if (r->left != nullptr)
        {
            insert(r->left, val);
        }
        else
        {
            r->left = new node;
            r->left->data = val;
            r->left->left = nullptr;
            r->left->right = nullptr;
            return;
        }
    }
    else
    {
        if (r->right != nullptr)
        {
            insert(r->right, val);
        }
        else
        {
            r->right = new node;
            r->right->data = val;
            r->right->left = nullptr;
            r->right->right = nullptr;
            return;
        }
    }
}

node* BST::search(int key)
{
    return search(root, key);
}
node* BST::search(node* r, int key)
{
    if (r == nullptr || r->data == key)
        return r;
    else if (key < r->data)
        return search(r->left, key);
    else
        return search(r->right, key);
}


void BST::preorder()
{
    preorder(root);
}
void BST::preorder(node* ptr)
{
    if (ptr != nullptr)
    {
        cout << ptr->data << " ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void BST::inorder()
{
    inorder(root);
}
void BST::inorder(node* ptr)
{
    if (ptr != nullptr)
    {
        inorder(ptr->left);
        cout << ptr->data << " ";
        inorder(ptr->right);
    }
}

void BST::postorder()
{
    postorder(root);
}
void BST::postorder(node* ptr)
{
    if (ptr != nullptr)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout << ptr->data << " ";
    }
}
