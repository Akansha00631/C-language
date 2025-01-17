#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci series:\n");

        for (int i = 1; i <= n; i++) {
            printf("%d ", first); 
            next = first + second; 
            first = second; 
            second = next;
        }
        printf("\n");
    }

    return 0;
}
