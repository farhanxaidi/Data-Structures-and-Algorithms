#pragma once
#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node() { left = right = nullptr; }
};
class BST
{
    node* root;
    void insert(node*&,int);
    node* search(node*,int);
    void preorder(node*);
    void inorder(node*);
    void postorder(node*);
public:
    BST()
    {
        root = nullptr;
    }
    void insert(int);
    node* search(int);
    void preorder();
    void inorder();
    void postorder();    
};
