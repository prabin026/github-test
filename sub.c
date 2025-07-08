#include <stdio.h>

int subtract(int a, int b, int c) {
    return a - b - c;
}

int product(int a, int b, int c) {
    return a * b * c;
}

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    int result = subtract(x, y, z);
    printf("After subtracting %d and %d from %d, ", y, z, x); 
    printf("Result: %d\n", result);

    int prod = product(x, y, z);
    printf("Product of %d, %d, and %d is: %d\n", x, y, z, prod);

    return 0;
}