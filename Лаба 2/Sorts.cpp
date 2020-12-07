#include <iostream>
#include "Sorts.h"

using namespace std;

int BinarySearch(int* array, int left, int right, int key)
{
    int midd = 0;
    while (2 + 2 == 4) {
        midd = (left + right) / 2;

        if (key < array[midd])
            right = midd - 1;
        else if (key > array[midd])
            left = midd + 1;
        else
            return midd;

        if (left > right)
            return -1;
    }
}

void QuickSort(int* array, int left, int right)
{
    int i = left;
    int j = right;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j) {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > left)
        QuickSort(array, left, j);
    if (i < right)
        QuickSort(array, i, right);
}

void InsertionSort(int* array, int sizeOfArray)
{
    int key;
    int j;
    for (int i = 1; i < sizeOfArray; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void BubbleSort(int* array, int sizeOfArray)
{
    int temp;
    for (int i = 0; i < sizeOfArray - 1; i++) {
        for (int j = 0; j < sizeOfArray - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void BogoSort(int* array, int sizeOfArray)
{
    bool sorted = false;
    int index;
    int temp;
    while (sorted == false) {
        for (int i = 0; i < sizeOfArray; i++) {
            index = rand() % sizeOfArray;
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }

        for (int i = 0; i < sizeOfArray - 1; i++) {
            sorted = true;
            if (array[i] > array[i + 1]) {
                sorted = false;
                break;
            }
                
        }
    }
}

void CountingSort(int* array, int sizeOfArray)
{
    int countArray[256] = { 0 };
  
    for (int i = 0; i < sizeOfArray; i++)
        countArray[array[i]] = countArray[array[i]] + 1;

    int counter = 0;
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < countArray[i]; j++) {
            array[counter] = i;
            counter++;
        }
    }
}

