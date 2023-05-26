#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int number, i, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        if (fibonacci(i) % 2 == 0) {
            sum += fibonacci(i);
        }
    }

    printf("%d\n", sum);

    return 0;
}
