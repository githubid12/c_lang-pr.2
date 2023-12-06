#include <stdio.h>

int main() {
    int a, b, ch;
    int sum, min, mul, div;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Press 1 for sum\n");
    printf("Press 2 for min\n");
    printf("Press 3 for mul\n");
    printf("Press 4 for div\n");
    scanf("%d", &ch);

    if (ch == 1) {
        sum = a + b;
        printf("Sum: %d\n", sum);
    } else if (ch == 2) {
        min = a - b;
        printf("Min: %d\n", min);
    } else if (ch == 3) {
        mul = a * b;
        printf("Mul: %d\n", mul);
    } else if (ch == 4) {
        div = a / b;
        printf("Div: %d\n", div);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
