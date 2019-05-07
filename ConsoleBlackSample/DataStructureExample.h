#include "Node.h"

#ifndef DATASTRUCTUREEXAMPLE_H
#define DATASTRUCTUREEXAMPLE_H
class DataStructureExample {

protected:

	//---------------------------------------------------------------------
	//! @brief Adds an integer entry to the linked list object, updating 
	//! all pointers.
	//! @param data An integer value to be stored within the linked list.
	//! @return Nothing.
	//---------------------------------------------------------------------
	void addElement(int data);

	//! A shared pointer to the first entry of the linked list.
	std::shared_ptr<Node<int>> first;

	//! A shared pointer to the last entry of the linked list.
	std::shared_ptr<Node<int>> last;
};
#endif
