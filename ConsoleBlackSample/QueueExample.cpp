#include "QueueExample.h"

//-----------------------------------------------------------------------------
//! @fn dequeue
//!
//! @brief An implementation of the integer removal method within the concrete 
//! StackExample class.
//-----------------------------------------------------------------------------
int QueueExample::dequeue(void) {

	// Check that the user isn't dequeueing an integer from an empty stack, 
	// then set the output value.
	int output = 0;
	if (!this->first) {
		throw std::exception("Tried to dequeue from an empty queue!");
	}
	else {
		output = this->first->value;
	}

	// Set the first node of the sequence to the next entry, then update all 
	// pointer values to remove the first entry of the sequence.
	this->first = this->first->next;
	if (this->first) {
		this->first->prev.reset();
	}
	else {
		this->last = this->first;
	}

	// Return the output value.
	return output;
}

//-----------------------------------------------------------------------------
//! @fn queue
//!
//! @brief An implementation of the integer addition method within the concrete 
//! QueueExample class.
//-----------------------------------------------------------------------------
void QueueExample::queue(int data) {

	// Call the underlying integer addition method from the base class.
	this->addElement(data);
}