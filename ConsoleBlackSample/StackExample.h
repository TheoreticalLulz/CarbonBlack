#include "DataStructureExample.h"

class StackExample : public DataStructureExample {
	public:
		
		//---------------------------------------------------------------------
		//! @brief Removes the last entry of the linked list object, returning 
		//! the stored integer value.
		//! @return The current integer at the top of the stack object.
		//---------------------------------------------------------------------
		int pop(void);
		
		//---------------------------------------------------------------------
		//! @brief Adds an integer entry to the linked list object, updating 
		//! all pointers.
		//! @param data An integer value to be stored within the linked list.
		//! @return Nothing.
		//---------------------------------------------------------------------
		void push(int data);
};