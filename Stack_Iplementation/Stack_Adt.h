#pragma once
template<typename T>
class Stack_Adt
{
public:
	virtual bool isEmpty() = 0;
	virtual bool Push(const T& item) = 0;
	virtual bool Pop() = 0;
	virtual T Peek() const = 0;
	virtual ~Stack_Adt() {};
};

