//Write a program to Write function for 
//Armstrong.
#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int isArmstrong(int num) {
    int original = num, temp = num;
    int digits = 0;
    double sum = 0;

    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of digits raised to the power of digits
    while (temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is Not an Armstrong Number.\n", num);

    return 0;
}