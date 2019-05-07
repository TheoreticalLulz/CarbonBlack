#include "DataStructureExample.h"

//-----------------------------------------------------------------------------
//! @fn addElement
//!
//! @brief An implementation of the integer addition method within the concrete 
//! DataStructureExample class.
//-----------------------------------------------------------------------------
void DataStructureExample::addElement(int data) {

	// Initialize a new node to append the the linked list, and populate its 
	// member variables accordingly.
	std::shared_ptr<Node<int>> node(new Node<int>);
	node->value = data;

	// Update the previous pointer of the node, and the next pointer of the 
	// last element in the sequence.
	if (this->last) {
		node->prev = this->last;
		this->last->next = node;
	}

	// Store the newly generated node.
	this->last = node;
	if (!this->first) {
		this->first = node;
	}
}