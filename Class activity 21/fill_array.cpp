#include "fill_array.hpp"
#include <iostream>

using namespace std;

// Function to fill the array dynamically
void fillArray(std::unique_ptr<int[]>& arr, int& size) {
	int num;
	size = 0;

	cout << "Enter numbers (enter -1 to stop):" << endl;
	while (true) {
		cin >> num;
		if (num == -1) break;

		// Dynamically allocate a new array with increased size
		std::unique_ptr<int[]> temp = std::make_unique<int[]>(size + 1);

		// Copy elements from the old array to the new array
		for (int i = 0; i < size; i++) {
			temp[i] = arr[i];

		}
		// Add the new number
		temp[size] = num;
		size++;
		// Transfer ownership to the original array
		arr = std::move(temp);
	}
}