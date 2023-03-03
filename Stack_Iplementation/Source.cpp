#include"Stack_arr.h"
#include"Stack_List.h"
#include<Windows.h>
#include<string>
#include<iostream>
#include<atomic>
#include<thread>
using namespace std;


int main() {

	Stack_Adt<string>* S1 = new Stack_List<string>;
	string anItem = "";
	cout << "Enter an String \n";
	cin >> anItem;
	S1->Push(anItem);
	cout << S1->isEmpty() << endl;
	string x = S1->Peek();
	cout << x << endl;
	S1->Pop();
	cout << S1->isEmpty() << endl;

	delete S1;

}