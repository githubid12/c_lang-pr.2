#include <stdio.h>

int main() {
    int a, b, c, d;
    int max;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
