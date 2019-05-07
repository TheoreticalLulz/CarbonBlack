#include "DataStructureExample.h"

class QueueExample : public DataStructureExample {
	public:
		
		//---------------------------------------------------------------------
		//! @brief Removes the first entry of the linked list object, returning 
		//! the stored integer value.
		//! @return The current integer at the top of the stack object.
		//---------------------------------------------------------------------
		int dequeue(void);
		
		//---------------------------------------------------------------------
		//! @brief Adds an integer entry to the linked list object, updating 
		//! all pointers.
		//! @param data An integer value to be stored within the linked list.
		//! @return Nothing.
		//---------------------------------------------------------------------
		void queue(int data);
};
