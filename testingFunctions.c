#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 30

// Provided functions
int findString(const char str[], const char list[][MAX_STRING_LEN + 1], const int nstrings)
{
	int i, result = -1, found = 0;
	for (i = 0; i < nstrings && !found; i++)
	{
		if (0 == strcmp(str, list[i]))
		{
			result = i;
		}
	}
	return result;
}

void init(int ar[], const int value, const int size) {
    int i;
    for (i = 0; i < size; i++) {
        ar[i] = value;
    }
}

// Function to test findString
int testFindString() {
    // Setup: Define test data
    const int nstrings = 3;
    const char list[nstrings][MAX_STRING_LEN + 1] = { "apple", "banana", "cherry" };
    const char searchString[] = "banana";
    const int expectedIndex = 1;

    // Execution: Call findString to search for searchString in list
    int index = findString(searchString, list, nstrings);

    // Comparison: Check if the result is as expected
    if (index == expectedIndex) {
        printf("findString test passed! Found '%s' at index %d.\n", searchString, index);
        return 1; // Test passed
    } else {
        printf("findString test failed! Expected index %d but got %d.\n", expectedIndex, index);
        return 0; // Test failed
    }
}

// Function to test init
int testInit() {
    // Setup: Initialize an array using init function
    const int size = 5;
    int array[size];
    const int initialValue = -1;
    init(array, initialValue, size);

    // Execution & Comparison: Check if array is initialized correctly
    int passed = 1; // Assume test passed
    for (int i = 0; i < size; i++) {
        if (array[i] != initialValue) {
            printf("init test failed! Expected %d but got %d at index %d.\n", initialValue, array[i], i);
            passed = 0; // Test failed
        }
    }

    if (passed) {
        printf("init test passed! Array initialized correctly.\n");
    }

    return passed;
}

// Main function to run tests
int main() {
    int allTestsPassed = 1;

    // Run findString test
    if (!testFindString()) {
        allTestsPassed = 0;
    }

    // Run init test
    if (!testInit()) {
        allTestsPassed = 0;
    }

    // Print final result
    if (allTestsPassed) {
        printf("All tests passed!\n");
    } else {
        printf("Some tests failed.\n");
    }

    return 0;
}