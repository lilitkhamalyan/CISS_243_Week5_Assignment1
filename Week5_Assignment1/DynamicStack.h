#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H
#include <string>
#include <iostream>
using namespace std;
// Stack template
template <class T>
class DynamicStack
{
private:
	// Structure for the stack nodes.
	struct StackNode
	{
		T value; // Value in the node.
		StackNode *next; // Pointer to the next node.
	};
	StackNode *top; // Ponter to the stack top.
public:
	// Constructor
	DynamicStack()
	{
		top = nullptr;
	}
	// Destructor
	~DynamicStack()
	{
		StackNode *nodePtr, *nextNode;
		// Position nodePtr at the top of the stack.
		nodePtr = top;
		// Traverse the list deleting each node.
		while (nodePtr != nullptr)
		{
			nextNode = nodePtr->next;
			delete nodePtr;
			nodePtr = nextNode;
		}
	}
	// Member function push pushes the argument onto the stack. 
	void push(T item)
	{
		StackNode *newNode = nullptr; // pointer to a new node
		// Allocate a new node and store num there.
		newNode = new StackNode;
		newNode->value = item;
		// if ther are no nodes in the list
		//Make newNode the first node.
		if (isEmpty())
		{
			top = newNode;
			newNode->next = nullptr;
		}
		else // Otherwise, insert NewNode before top.
		{
			newNode->next = top;
			top = newNode;
		}
	}
	// Member function pop pops the value at the top of the stack off, and copies it into the 
	// variable passed as an argument. It returns false if function was not able to pop an item off the stack
	// Otherwise, the function returns true. 
	bool pop(T &item)
	{
		bool status;
		StackNode *temp = nullptr; // Temporary pointer
		// First make sure the stack isn't empty.
		if (isEmpty())
		{
			cout << "The stack is empty." << endl;
			status = false;
		}
		else // pop value off top of stack
		{
			item = top->value;
			temp = top->next;
			delete top;
			top = temp;
			status = true;
		}
		return status;
	}
	// Member function IsEmpty returns true if the stack is empty, or false otherwise. 
	bool isEmpty()
	{
		bool status;
		if (!top)
			status = true;
		else
			status = false;
		return status;
	}
};

#endif
