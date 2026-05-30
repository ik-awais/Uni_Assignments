#include <stdio.h>
int main()
{
    int attendance, eligible, inter_assess_marks, final_marks;
    char Grade;

    printf("Enter your Attendance: ");
    scanf(" %d", &attendance);
    printf("Enter your Internal Assessment Marks: ");
    scanf(" %d", &inter_assess_marks);
    printf("Enter your Final Exam Marks: ");
    scanf(" %d", &final_marks);

    if (attendance >= 75 && inter_assess_marks >= 40) {
        eligible = 1;

        if (final_marks >= 90) {
            Grade = 65;
            printf("Attendance: %d%%, ", attendance);
            printf("Internal Assessment Marks: %d, ", inter_assess_marks);
            printf("Final Exam Marks: %d, ", final_marks);
            printf("Grade %c+, ", Grade);
            printf("100%% Scholarship\n");

        }

        else if (final_marks >= 80 && final_marks < 90 ) {
            Grade = 65;
            printf("Attendance: %d%%, ", attendance);
            printf("Internal Assessment Marks: %d, ", inter_assess_marks);
            printf("Final Exam Marks: %d, ", final_marks);
            printf("Grade %c, ", Grade);
            printf("50%% Scholarship\n");
        }

        else if (final_marks >= 70 && final_marks < 80) {
            Grade = 66;
            printf("Attendance: %d%%, ", attendance);
            printf("Internal Assessment Marks: %d, ", inter_assess_marks);
            printf("Final Exam Marks: %d, ", final_marks);
            printf("Grade %c\n", Grade);
        }

        else if (final_marks >= 60 && final_marks < 70) {
            Grade = 67;
            printf("Attendance: %d%%, ", attendance);
            printf("Internal Assessment Marks: %d, ", inter_assess_marks);
            printf("Final Exam Marks: %d, ", final_marks);
            printf("Grade %c\n", Grade);
        }

        else if (final_marks >= 50 && final_marks < 60) {
            Grade = 68;
            printf("Attendance: %d%%, ", attendance);
            printf("Internal Assessment Marks: %d, ", inter_assess_marks);
            printf("Final Exam Marks: %d, ", final_marks);
            printf("Grade %c\n", Grade);
        }

        else if (final_marks < 50) {  
            printf("Attendance: %d%%, ", attendance);
            printf("Internal Assessment Marks: %d, ", inter_assess_marks);
            printf("Final Exam Marks: %d, ", final_marks);      
            printf("Fail\n");
        }
    
    }
    else {
        printf("Attendance: %d%%, ", attendance);
        printf("Internal Assessment Marks: %d, ", inter_assess_marks);
        printf("Final Exam Marks: %d, ", final_marks);
        printf("Not Eligible\n");
        eligible = 0;
    }

    return 0;

}