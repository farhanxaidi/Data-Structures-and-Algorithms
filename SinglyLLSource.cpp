#include<iostream>
#include"Linker.h"
using namespace std;



int main()
{
	SinglyLL<int> obj;

	obj.insertDescending(100);
	obj.insertDescending(999);
	obj.insertDescending(50);
	obj.insertDescending(-3);
	obj.insertDescending(75);

	obj.deleteValue(999);
	obj.deleteValue(-3);

	cout << obj.deleteValue(40) << endl;

	//obj.display();

	return 0;
}