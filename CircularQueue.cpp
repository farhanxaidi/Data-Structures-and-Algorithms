#include "CircularQueue.h"


template <class T>
CircularQueue<T>::CircularQueue()
{
	count = 0;
	front = 0;
	rear = 0;
	list = nullptr;
}
template <class T>
CircularQueue<T>::CircularQueue(int size)
{
	list = new T[size];
	count = 0;
	front = 0;
	rear = 0;
	this->maxSize = size;
}
template <class T>
T CircularQueue<T>::frontElement() const
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
T CircularQueue<T>::rearElement() const
{
	if (count != 0)
		return list[rear-1];
	else
	{
		cout << "Queue is Empty!" << endl;
		return -1;
	}
}

template <class T>
void CircularQueue<T>::display()
{
	cout << "Count: " << count << "\tFront: " << front << "\tRear: " << rear << endl;
	for (int i = 0; i < this->maxSize; i++)
		cout << i << ". " << list[i] << "\t";
	cout << endl << endl;
}
template <class T>
bool CircularQueue<T>::isEmpty() const
{
	if (count == 0)
		return true;
	else
		return false;
}
template <class T>
bool CircularQueue<T>::isFull() const
{
	if (count == maxSize)
		return true;
	else
		return false;
}
template <class T>
void CircularQueue<T>::enQueue(T x)
{
	if (!isFull())
	{
		list[rear] = x;
		rear = (rear + 1) % (this->maxSize);
		count++;
	}
	else
		cout << "Queue is Full\n";
}
template <class T>
T CircularQueue<T>::deQueue()
{

	front = (front) % maxSize;
	if (!isEmpty())
	{
		count--;
		return list[front++];
	}
	else
	{
		cout << "Queue is Empty" << endl;
		return list[front];
	}
}
template <class T>
CircularQueue<T>::~CircularQueue()
{
	delete[] list;
}