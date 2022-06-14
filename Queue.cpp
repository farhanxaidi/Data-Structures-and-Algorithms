#include "Queue.h"


template <class T>
Queue<T>::Queue()
{
	count = 0;
	front = 0;
	rear = 0;
	list = new T[10];
	maxSize = 10;
}
template <class T>
Queue<T>::Queue(int size)
{
	list = new T[size];
	count = 0;
	front = 0;
	rear = 0;
	this->maxSize = size;
}
template <class T>
T Queue<T>::frontElement() const
{
	if (count != 0)
		return list[front];
	else
	{
		cout << "Queue is Empty!" << endl;
		return -1;
	}
}

template <class T>
T Queue<T>::rearElement() const
{
	if (count != 0)
		return list[rear - 1];
	else
	{
		cout << "Queue is Empty!" << endl;
		return -1;
	}
}

template <class T>
bool Queue<T>::isEmpty() const
{
	if (front-rear == 0 )
		return true;
	else
		return false;
}
template <class T>
bool Queue<T>::isFull() const
{
	if (front-rear == maxSize-1)
		return true;
	else
		return false;
}
template <class T>
void Queue<T>::enQueue(T x)
{
	if (!isFull())
	{
		list[rear] = x;
		rear = (rear + 1);
		count++;
	}
	else
		cout << "Queue is Full\n";
}
template <class T>
T Queue<T>::deQueue()
{
	if (!isEmpty())
	{
		count--;
		T val = list[front];
		front = (front + 1);
		return val;
	}
	else
	{
		cout << "Queue is Empty" << endl;
		return list[front];
	}
}
template <class T>
Queue<T>::~Queue()
{
	delete[] list;
}