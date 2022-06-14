#pragma once

#include<iostream>
using namespace std;
template<class T>
struct Node
{
    T data;
    Node<T> * next;
    Node()
    {
        next = nullptr;
    }
    Node(T d)
    {
        data = d;
        next = nullptr;
    }
};
template<class T>
class SinglyLL
{
    Node<T>* head;
public:
    SinglyLL() { head = nullptr; }
    
    void insertAtHead(T);
    void insertDescending(T);
    void display();
    bool deleteValue(T);

    ~SinglyLL();
};



