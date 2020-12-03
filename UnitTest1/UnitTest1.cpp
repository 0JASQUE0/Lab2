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

		TEST_METHOD(Binary_Search3)
		{
			int array[5] = { 3,3,3,3,3 };
			int index = BinarySearch(array, 0, 4, 3);
			Assert::IsTrue(index == 2);
		}

		TEST_METHOD(Quick_Sort1) 
		{
			int array[5] = { 5,2,3,9,4 };
			QuickSort(array, 0, 4);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Quick_Sort2)
		{
			int array[5] = { 2,3,2,9,3 };
			QuickSort(array, 0, 4);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 2);
			Assert::IsTrue(array[2] == 3);
			Assert::IsTrue(array[3] == 3);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Quick_Sort3)
		{
			int array[5] = { 9,2,2,2,2 };
			QuickSort(array, 0, 4);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 2);
			Assert::IsTrue(array[2] == 2);
			Assert::IsTrue(array[3] == 2);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Insertion_Sort1)
		{
			int array[5] = { 5,2,3,9,4 };
			InsertionSort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Insertion_Sort2)
		{
			int array[5] = { 5,5,3,3,4 };
			InsertionSort(array, 5);
			Assert::IsTrue(array[0] == 3);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 5);
		}

		TEST_METHOD(Insertion_Sort3)
		{
			int array[5] = { 5,5,3,5,5 };
			InsertionSort(array, 5);
			Assert::IsTrue(array[0] == 3);
			Assert::IsTrue(array[1] == 5);
			Assert::IsTrue(array[2] == 5);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 5);
		}

		TEST_METHOD(Bubble_Sort1)
		{
			int array[5] = { 5,2,3,9,4 };
			BubbleSort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Bubble_Sort2)
		{
			int array[5] = { 5,5,3,3,4 };
			BubbleSort(array, 5);
			Assert::IsTrue(array[0] == 3);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 5);
		}

		TEST_METHOD(Bubble_Sort3)
		{
			int array[5] = { 5,5,3,5,5 };
			BubbleSort(array, 5);
			Assert::IsTrue(array[0] == 3);
			Assert::IsTrue(array[1] == 5);
			Assert::IsTrue(array[2] == 5);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 5);
		}

		TEST_METHOD(Bogo_Sort1)
		{
			int array[5] = { 5,2,3,9,4 };
			BogoSort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Bogo_Sort2)
		{
			int array[5] = { 15,9,3,9,3 };
			BogoSort(array, 5);
			Assert::IsTrue(array[0] == 3);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 9);
			Assert::IsTrue(array[3] == 9);
			Assert::IsTrue(array[4] == 15);
		}

		TEST_METHOD(Bogo_Sort3)
		{
			int array[5] = { 5,5,5,55,5 };
			BogoSort(array, 5);
			Assert::IsTrue(array[0] == 5);
			Assert::IsTrue(array[1] == 5);
			Assert::IsTrue(array[2] == 5);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 55);
		}

		TEST_METHOD(Counting_Sort1)
		{
			int array[5] = { 5,2,3,9,4 };
			CountingSort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(Counting_Sort2)
		{
			int array[5] = { 55,2,3,2,55 };
			CountingSort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 2);
			Assert::IsTrue(array[2] == 3);
			Assert::IsTrue(array[3] == 55);
			Assert::IsTrue(array[4] == 55);
		}

		TEST_METHOD(Counting_Sort3)
		{
			int array[5] = { 9,9,9,9,4 };
			CountingSort(array, 5);
			Assert::IsTrue(array[0] == 4);
			Assert::IsTrue(array[1] == 9);
			Assert::IsTrue(array[2] == 9);
			Assert::IsTrue(array[3] == 9);
			Assert::IsTrue(array[4] == 9);
		}
	};
}
