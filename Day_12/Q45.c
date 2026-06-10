//Write a program to Write function for 
//palindrome.
#include <stdio.h>

// Function to check palindrome
int isPalindrome(int num) {
    int original = num, reverse = 0, rem;

    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    return (original == reverse);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome Number.\n", num);
    else
        printf("%d is Not a Palindrome Number.\n", num);

    return 0;
}