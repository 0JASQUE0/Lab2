#include <iostream>
#include <ctime>
#include "Sorts.h"
#include <iomanip>

using namespace std;

int main()
{
	int array[100000];
	double time = 0;

	int N = sizeof(array) / sizeof(array[0]);

	for (int k = 0; k < 10; k++) {
		double start = clock();
		for (int i = 0; i < 100000; i++) {
			array[i] = rand();
		}

		BubbleSort(array, N);

		double end = clock();
		cout << (end - start) / CLK_TCK << endl;
		time += end - start;
	}

	cout << time / 10.0 / CLK_TCK;

	return 0;
}