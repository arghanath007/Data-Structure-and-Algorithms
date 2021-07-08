#include<iostream>

using namespace std;

class MyBase
{
public: 
	void show()
	{
		cout << "Base class show func called" << endl;
	}
	virtual void print()
	{
		cout << "Base class print func called" << endl;
	}
};

class MyDerive : public MyBase
{
	void show()
	{
		cout << "Derived class show func called" << endl;
	}
	void print()
	{
		cout << "Derived class print func called" << endl;
	}
};

int main()
{
	MyBase* basePtr;
	MyDerive derivedPtr;

	basePtr = &derivedPtr;
	basePtr->print(); //Since the print() was declared 'virtual' in the base class. This print() was dynamically called at run-time, this is an example of run-time polymorphism.
	basePtr->show();
}