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

    switch (ch) {
        case 1:
            sum = a + b;
            printf("Sum: %d\n", sum);
            break;
        case 2:
            min = a - b;
            printf("Min: %d\n", min);
            break;
        case 3:
            mul = a * b;
            printf("Mul: %d\n", mul);
            break;
        case 4:
            div = a / b;
            printf("Div: %d\n", div);
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
