#pragma once

template<class T>
class Stack
{
	T* container;
	int stackSize;
	int top;
public:
	Stack();
	Stack(int);
	Stack(const Stack&);
	void push(T);
	T pop();
	bool isFull();
	bool isEmpty();
	T top();
	~Stack();
};
