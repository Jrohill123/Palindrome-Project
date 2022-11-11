#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
template <class t1>
struct st
{
	t1 info;
	st* next;
};

template <class t1>
class stack
{
	st<t1> *top;
public:
	stack();
	void push(t1);
	t1 pop();
	bool isempty();
	bool isfull();
	void print();

};

template <class t1>
stack<t1>::stack()
{
	top = NULL;
}

template<class t1>
void stack<t1>::push(t1 a)
{
	st<t1>* temp;
	temp = new st<t1>;
	temp->info = a;
	temp->next = top;
	top = temp;
}

template<class t1>
t1 stack<t1>::pop()
{
	t1 value;
	st<t1>* temp;
	value = top->info;
	temp = top;
	top = top->next;
	temp->next = NULL;
	delete temp;
	return value;
}

template<class t1>
bool stack<t1>::isempty()
{
	if (top == NULL)
	{
		return true;
	}
	else
		return false;
}

template<class t1>
bool stack<t1>::isfull()
{
	st<t1>* ptr;
	ptr = new st<t1>;
	if (ptr == NULL)
	{
		return true;
	}
	else
	{
		delete ptr;
		return false;
	}
}

template<class t1>
void stack<t1>::print()
{
	st<t1>* temp;
	temp = top;
	while (temp != NULL)
	{
		cout << temp->info;
		temp = temp->next;
	}
}