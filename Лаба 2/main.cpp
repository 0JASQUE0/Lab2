#include <iostream>
#include <ctime>
#include "Sorts.h"
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int array[1000];
	double time = 0;

	int N = sizeof(array) / sizeof(array[0]);


	for (int k = 0; k < 1; k++) {
		double start = clock();
		for (int i = 0; i < 1000; i++) {
			array[i] = rand();
		}

		InsertionSort(array, N);

		double end = clock();
		cout << (end - start) / CLK_TCK << endl;
		time += end - start;
	}

	cout << time / 10.0 / CLK_TCK;

	return 0;
}