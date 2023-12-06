#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isalpha(ch)) {
        printf("You entered an alphabet");
    } else if(isdigit(ch)) {
        printf("You entered a digit");
    } else {
        printf("You entered a special character");
    }

    return 0;
}
