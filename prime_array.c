#include <stdio.h>

int main() {
    int arr[20] = {2, 3, 45, 7, 54, 44, 11, 35, 66, 37, 67};  // Initialize the array
    int n = sizeof(arr) / sizeof(arr[0]);  // Find the number of elements in the array

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1;  // Assume the number is prime

        // Check if the number is prime
        if (num < 2) {
            isPrime = 0;  // Numbers less than 2 are not prime
        } else {
            for (int j = 2; j * j <= num; j++) {  // Check divisibility up to the square root
                if (num % j == 0) {
                    isPrime = 0;  // Not prime if divisible
                    break;
                }
            }
        }

        // Print the number if it's prime
        if (isPrime) {
            printf("%d\t", num);
        }
    }
    
    return 0;
}

