#include <stdio.h>
int main() {
    int grade1, grade2, grade3, gradeTest;
    double average, ProjectGrade, TestGrade;
    double gradeTestWeight = 0.8;
    double gradeWeight = 0.2;
    printf("Enter your grade1: ");
    scanf("%d", &grade1);
    printf("Enter your grade2: ");
    scanf("%d", &grade2);
    printf("Enter your grade3: ");
    scanf("%d", &grade3);
    printf("Enter your gradeTest: ");
    scanf("%d", &gradeTest);

    ProjectGrade = ((grade1 + grade2 + grade3) / 3.0);
    average = ProjectGrade * gradeWeight + gradeTest * gradeTestWeight;

    printf("Project Grade (20%%): %.2f\n", ProjectGrade * gradeWeight);
    printf("Test Grade (80%%): %.2f\n", gradeTest * gradeTestWeight);
    printf("Your average is: %.2f\n", average);
    return 0;
}
