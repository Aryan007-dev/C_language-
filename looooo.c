#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the number to be checked
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find divisors and calculate their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the number
    if (sum == num && num != 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
