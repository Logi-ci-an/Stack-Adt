#pragma once
#include "Stack_Adt.h"
#include<iostream>
using namespace std;
template<class T>
class Node
{
private:
	T Data;
	Node<T>* Next;
public:
	Node() {
		Next = nullptr;
	}
	void SetData(T D) {
		Data = D;
	}
	void SetNext(Node<T>* N) {
		Next = N;
	}
	T GetData() {
		return this->Data;
	}
	Node<T>* GetNext() {
		return this->Next;
	}

};


template<typename T>
class Stack_List :public Stack_Adt<T>
{
private:
	Node<T>* Top;//like head
public:
	Stack_List() {
		Top=nullptr;
	}
	Stack_List(const Stack_List<T>& Lista) {
		this->Top = Lista.Top;
		// I implemented it as shallow copy and I will edit it sooner to Deep copy    || or || I would make two modes
	}

	virtual bool Push(const T& item) {
		Node<T>* New = new Node<T>;
		New->SetData(item);
		New->SetNext(Top);
		Top=New;
		return true;
	}
	virtual bool Pop() {
		if (!Top)
			return false;
		Node<T>* Deleted = Top;
		Top = Top->GetNext();
		delete Deleted;
	}
	virtual bool isEmpty() {
		return(!Top);
	}
	virtual T Peek()const {
		return Top->GetData();
	}
	~Stack_List() {
		while (!this->isEmpty()) {
			this->Pop();
		}
	}

};

