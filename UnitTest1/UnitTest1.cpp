#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Прога 3 сем лабы\Лаба 2\Лаба 2\Sorts.h"
#include "D:\Прога 3 сем лабы\Лаба 2\Лаба 2\Sorts.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Binary_Search1)
		{
			int array[5] = { 1,2,3,4,5 };
			int index = BinarySearch(array, 0, 4, 2);
			Assert::IsTrue(index == 1);
		}

		TEST_METHOD(Binary_Search2)
		{
			int array[5] = { 1,2,3,4,5 };
			int index = BinarySearch(array, 0, 4, 6);
			Assert::IsTrue(index == -1);
		}

		TEST_METHOD(Quick_Sort)
		{
			int array[5] = { 5,2,3,9,4 };
			QuickSort(array, 0, 4);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Insertion_Sort)
		{
			int array[5] = { 5,2,3,9,4 };
			InsertionSort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Bogo_Sort)
		{
			int array[5] = { 5,2,3,9,4 };
			BogoSort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Counting_Sort)
		{
			int array[5] = { 5,2,3,9,4 };
			CountingSort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
		}
	};
}
