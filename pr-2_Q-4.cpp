#include <stdio.h>

int main() {
    char day;
    printf("Enter a day: ");
    scanf(" %c", &day);

    switch (day) {
        case 'M':
        case 'm':
            printf("Monday\n");
            break;
        case 'T':
        case 't':
            printf("Tuesday\n");
            break;
        case 'W':
        case 'w':
            printf("Wednesday\n");
            break;
        case 'T':
        case 't':
            printf("Thursday\n");
            break;
        case 'F':
        case 'f':
            printf("Friday\n");
            break;
        case 'S':
        case 's':
            printf("Saturday\n");
            break;
        case 'U':
        case 'u':
            printf("Sunday\n");
            break;
        default:
            printf("Error: Invalid day.\n");
    }

    return 0;
}
