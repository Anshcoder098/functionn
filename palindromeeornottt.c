#include <stdio.h>

int main() {
    int number, rev = 0, originalNumber, rem;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; 
    do {
        rem = number % 10; 
        rev = rev * 10 + rem; 
        number /= 10; 
    } while (number != 0);

    
    if (originalNumber == rev) {
        printf("%d is a palindrome\n", originalNumber);
    } else {
        printf("%d is not a palindrome\n", originalNumber);
    }

    return 0;
}


