#include "sum_array.hpp"

// Function to calculate the sum of array elements

int sumArray(const std::unique_ptr<int[]>& arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}