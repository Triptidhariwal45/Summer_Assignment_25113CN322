//Write a program to Find sum and average of 
//array.
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

    // Ask user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Create an array of size n
    int arr[n];

    // Input array elements from the user
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all elements
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average using typecasting to get accurate floating-point division
    average = (float)sum / n;

    // Display the results
    printf("\nSum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", average);

    return 0;
}
