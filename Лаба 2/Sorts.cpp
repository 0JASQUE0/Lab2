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

void QuickSort(int* array, int low, int high)
{
    int i = low;
    int j = high;
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
    if (j > low)
        QuickSort(array, low, j);
    if (i < high)
        QuickSort(array, i, high);
}

void InsertionSort(int* array, int n)
{
    int key;
    int j;
    for (int i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void BubbleSort(int* array, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void BogoSort(int* array, int n)
{
    bool sorted = false;
    int index;
    int temp;
    while (sorted == false) {
        for (int i = 0; i < n; i++) {
            index = rand() % n;
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }

        for (int i = 0; i < n - 1; i++) {
            sorted = true;
            if (array[i] > array[i + 1]) {
                sorted = false;
                break;
            }
                
        }
    }
}

void CountingSort(int* array, int n)
{
    int c[128] = { 0 };
  
    for (int i = 0; i < n; i++)
        c[array[i]] = c[array[i]] + 1;

    int b = 0;
    for (int i = 0; i < 128; i++) {
        for (int j = 0; j < c[i]; j++) {
            array[b] = i;
            b = b + 1;
        }
    }
}

