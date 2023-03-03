#pragma once
#include "Stack_Adt.h"
const int Max = 10;
template<typename T>
class Stack_arr :public Stack_Adt<T>
{
private:
	T Data[Max];
	int Top;
public:
	Stack_arr() {
		Top = -1;
	}
	virtual bool isEmpty() {
		return Top == -1;
	}
	virtual T Peek()const {
		return Data[Top];
	}
	virtual bool Push(const T& item) {
		if (Top == Max - 1)
			return false;
		Data[++Top] = item;
		return true;
	}
	virtual bool Pop() {
		if (isEmpty())
			return false;
		Top--;
		return true;
	}
	
};

