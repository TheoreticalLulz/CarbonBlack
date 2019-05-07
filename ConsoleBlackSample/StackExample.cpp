#include "StackExample.h"

//-----------------------------------------------------------------------------
//! @fn pop
//!
//! @brief An implementation of the integer removal method within the concrete 
//! StackExample class.
//-----------------------------------------------------------------------------
int StackExample::pop(void) {

	// Check that the user isn't popping an integer from an empty stack, then 
	// set the output value.
	int output = 0;
	if (!this->last) {
		throw std::exception("Tried to pop from an empty stack!");
	}
	else {
		output = this->last->value;
	}

	// Set the last node of the sequence to the previous entry, then update all 
	// pointer values to remove the last entry of the sequence.
	this->last = this->last->prev;
	if (this->last) {
		this->last->next.reset();
	}
	else {
		this->first = this->last;
	}

	// Return the output value.
	return output;
}

//-----------------------------------------------------------------------------
//! @fn push
//!
//! @brief An implementation of the integer addition method within the concrete 
//! StackExample class.
//-----------------------------------------------------------------------------
void StackExample::push(int data) {

	// Call the underlying integer addition method from the base class.
	this->addElement(data);
}