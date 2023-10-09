#include <stdio.h>
#include <ctype.h> 

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int harshadChecker(int num) {
    int sum = sumOfDigits(num);
    if (sum == 0) {
        return 0; 
    }
    if (num % sum == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");


    while (1) {
        if (scanf("%d", &num) != 1 || num <= 0) {
            printf("Invalid input. Please enter a positive integer: ");
            while (getchar() != '\n');
        } else {
            break; 
        }
    }

    if (harshadChecker(num)) {
        printf("%d is a Harshad number.\n", num);
    } else {
        printf("%d is not a Harshad number.\n", num);
    }

    return 0;
}
