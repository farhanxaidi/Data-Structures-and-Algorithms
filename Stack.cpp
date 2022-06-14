#include"Stack.h"

template<class T>
Stack<T>::Stack()
{
	container = nullptr;
	top = -1;
	stackSize = 0;
}
template<class T>
Stack<T>::Stack(int size)
{
	container = new T[size];
	top = -1;
	stackSize = size;
}
template<class T>
Stack<T>::Stack(const Stack& ref)
{
	container = new T[ref.stackSize];
	// Copy all values stored in stack
}
template<class T>
void Stack<T>::push(T val)
{
	if (!isFull())
	{
		++top;
		container[top] = val;
	}
	else
		cout << "STACK is FULL..!" << endl;
}
template<class T>
T Stack<T>::pop()
{
	if (!isEmpty())
	{
		T val = container[top];
		top--;
		return val;
	}
}
template<class T>
T Stack<T>::top()
{
	if (!isEmpty())
	{
		return container[top];
	}
}
template<class T>
bool Stack<T>::isFull()
{
	return (stackSize - 1 == top);
}
template<class X>
bool Stack<X>::isEmpty()
{
	return (top == -1);
}
template<class T>
Stack<T>::~Stack()
{
	if (container)
		delete[] container;
	container = nullptr;
	top = -1;
	stackSize = 0;
}