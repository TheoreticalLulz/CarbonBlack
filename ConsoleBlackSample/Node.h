#include <memory>
#include <limits>

#ifndef NODE_H
#define NODE_H
template <class Numeric> struct Node {
	
		//! A static assertion to require the user to only utilize a numeric 
		//! type within this list object. Notice that characters and boolean 
		//! values count as integer values in verification.
		static_assert(std::numeric_limits<Numeric>::is_integer, 
			"ListNode requires an integer type.");
	
		//! A numeric data value representing a node in the list.
		Numeric value;
		
		//! A shared pointer to the last numeric object in sequence.
		std::shared_ptr<Node<Numeric>> prev;
		
		//! A shared pointer to the next numeric object in sequence.
		std::shared_ptr<Node<Numeric>> next;
};
#endif
