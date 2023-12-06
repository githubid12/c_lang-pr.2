#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180) {
        printf("The triangle is valid.\n");
    } 
	else {
        printf("Error: The sum of the angles is not 180 degrees.\n");
    }

    return 0;
}
