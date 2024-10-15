#include <iostream>
#include "fill_array.hpp"
#include "sum_array.hpp"

using namespace std;

int main() {
	// Declare a unique pointer for the array
	std::unique_ptr < int[]> arr;
	int size = 0;

	// Call the function to fill the array
	fillArray(arr, size);

	// Calculate and display the sum of the array
	int sum = sumArray(arr, size);
	cout << "The sum of array is:" << sum << endl;

	return 0;
}