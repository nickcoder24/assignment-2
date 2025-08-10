/*Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
o Marks > 90: Grade A
o Marks > 75 and <= 90: Grade B
o Marks > 50 and <= 75: Grade C
o Marks <= 50: Grade D
• Use if-else orswitch statements for the decision-making process.*/
#include <stdio.h>

int main() {
    float marks;

    
    printf("Enter marks: ");
    scanf("%f", &marks);

    
    if (marks > 90) {
        printf("Grade: A\n");
    }
    else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    }
    else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: D\n");
    }

    return 0;
}
