//Write a program to Find largest and smallest 
//element.
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, large, small;

    // Ask user for the number of elements
    printf("Enter the number of elements (up to 100): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input size.\n");
        return 1;
    }

    // Input array elements from user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is both the largest and smallest
    large = arr[0];
    small = arr[0];

    // Traverse the array to find true largest and smallest elements
    for (i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i]; // Update largest
        }
        if (arr[i] < small) {
            small = arr[i]; // Update smallest
        }
    }

    // Print the final results
    printf("\nThe largest element is: %d\n", large);
    printf("The smallest element is: %d\n", small);

    return 0;
}
