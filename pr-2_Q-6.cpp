#include <stdio.h>

int main() {
    int phy, chem, bio, math, comp;
    int total_marks = 0;
    float percentage = 0.0;

    printf("Enter the marks of Physics: ");
    scanf("%d", &phy);

    printf("Enter the marks of Chemistry: ");
    scanf("%d", &chem);

    printf("Enter the marks of Biology: ");
    scanf("%d", &bio);

    printf("Enter the marks of Mathematics: ");
    scanf("%d", &math);

    printf("Enter the marks of Computer: ");
    scanf("%d", &comp);

    total_marks = phy + chem + bio + math + comp;
    percentage = (float)total_marks / 500 * 100;

    printf("Total Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else if (percentage >= 50) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
