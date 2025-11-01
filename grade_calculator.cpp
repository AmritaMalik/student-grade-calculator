#include <stdio.h>

int main() 
{
    int numSubjects;
    float marks[100], total = 0, average;
    int i;

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    // Input validation
    if (numSubjects <= 0) {
        printf("Invalid number of subjects.\n");
        return 1;
    }

    // Taking marks input
    for (i = 0; i < numSubjects; i++) {
        printf("Enter marks for subject %d (out of 100): ", i + 1);
        scanf("%f", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks entered! Please enter marks between 0 and 100.\n");
            return 1;
        }

        total += marks[i];
    }

    // Calculate average percentage
    average = total / numSubjects;

    // Display results
    printf("\n--- Results ---\n");
    printf("Total Marks: %.2f\n", total);
    printf("Average Percentage: %.2f%%\n", average);

    // Grade assignment
    if (average >= 90)
        printf("Grade: A+\n");
    else if (average >= 80)
        printf("Grade: A\n");
    else if (average >= 70)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else if (average >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F (Fail)\n");

    return 0;
}
