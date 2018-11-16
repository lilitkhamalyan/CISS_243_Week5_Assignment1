// Name: Lilit Khamalyan
// Class: CISS 243
// Date: 9/30/2018
#include <iostream>
#include <string>
#include "DynamicStack.h"
using namespace std;
// Function Prototypes. 
void pop(DynamicStack<string> &);
void pop(DynamicStack<int> &);
int main()
{
	// Create the sack that holds string. 
	DynamicStack<string> stackString;
	// Create the sack that holds int. 
	DynamicStack<int> stackInt;
	// Push the string values Apple, Carrot, and Broccoli onto the stack.
	cout << "Pushing Apple onto the stack. " << endl;
	stackString.push("Apple");
	cout << "Pushing Carrot onto the stack. " << endl;
	stackString.push("Carrot");
	cout << "Pushing Broccoli onto the stack. " << endl;
	stackString.push("Broccoli");
	// Calling pop function to pop the values. 
	pop(stackString);
	pop(stackString);
	pop(stackString);
	pop(stackString);
	// Push the values 5, 10, and 15 onto the stack.
	cout << "Pushing 5 onto the stack. " << endl;
	stackInt.push(5);
	cout << "Pushing 10 onto the stack. " << endl;
	stackInt.push(10);
	cout << "Pushing 15 onto the stack. " << endl;
	stackInt.push(15);
	// Calling pop function to pop the values. 
	pop(stackInt);
	pop(stackInt);
	pop(stackInt);
	pop(stackInt);
	system("pause");
	return 0;
}
// Pops an item from the stack. 
void pop(DynamicStack<string> &stack)
{
	string item;
	if (stack.pop(item))
		cout << "Popping " << item << endl;
}
// Pops an item from the stack. 
void pop(DynamicStack<int> &stack)
{
	int item;
	if (stack.pop(item))
		cout << "Popping " << item << endl;
}
