#include "pch.h"

namespace {

	TEST(StackTest, Correct) {
		std::shared_ptr<StackExample> foo(new StackExample);
		foo->push(1);
		foo->push(2);
		foo->push(3);

		EXPECT_EQ(foo->pop(), 3);
		EXPECT_EQ(foo->pop(), 2);
		EXPECT_EQ(foo->pop(), 1);
		ASSERT_THROW(foo->pop(), std::exception);
	}

	TEST(StackTest, FloatingPoint) {

		std::shared_ptr<StackExample> foo(new StackExample);
		foo->push(1.2345);
		EXPECT_EQ(foo->pop(), 1);
	}

	TEST(QueueTest, Correct) {

		std::shared_ptr<QueueExample> foo(new QueueExample);
		foo->queue(1);
		foo->queue(2);
		foo->queue(3);

		EXPECT_EQ(foo->dequeue(), 1);
		EXPECT_EQ(foo->dequeue(), 2);
		EXPECT_EQ(foo->dequeue(), 3);
		ASSERT_THROW(foo->dequeue(), std::exception);
	}

	TEST(QueueTest, FloatingPoint) {

		std::shared_ptr<QueueExample> foo(new QueueExample);
		foo->queue(1.2345);
		EXPECT_EQ(foo->dequeue(), 1);
	}
}