#include <stdio.h>

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int result = subtract(x, y);
    printf("Result: %d\n", result);

    return 0;
}