#include <iostream>
#include <ctime>
#include "Sorts.h"
#include <iomanip>

using namespace std;

int main()
{
	int array[1000];
	double time = 0;

	int N = sizeof(array) / sizeof(array[0]);

	for (int k = 0; k < 10; k++) {
		double start = clock();
		for (int i = 0; i < 1000; i++) {
			array[i] = rand();
		}

		QuickSort(array, 0, N - 1);

		double end = clock();
		time += end - start;
	}

	cout << time / 10.0 / CLK_TCK;

	return 0;
}