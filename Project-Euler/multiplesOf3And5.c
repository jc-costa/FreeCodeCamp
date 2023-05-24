#include <stdio.h>

int multiplesOf3And5(int number) {
    int sum = 0;

    for (int x = 0; x < number; x++) {
        if (x % 3 == 0 || x % 5 == 0) {
            sum += x;
        }
    }

    return sum;
}

int main() {
    printf("%d\n", multiplesOf3And5((1000)));
    return 0;
}
