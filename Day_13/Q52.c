//Write a program to Count even and odd 
//elements.
#include <stdio.h>

int main() {
    int size;
    int even_count = 0;
    int odd_count = 0;

    // Ask user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Guard against non-positive array sizes
    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    // Input elements from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Traverse the array to check and count even/odd elements
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;  // Remainder is 0, so it's even
        } else {
            odd_count++;   // Remainder is not 0, so it's odd
        }
    }

    // Print the final counts
    printf("\nTotal Even elements: %d\n", even_count);
    printf("Total Odd elements: %d\n", odd_count);

    return 0;
}
