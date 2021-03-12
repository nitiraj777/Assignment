// 5. Accept division of student from user and depends on the division
// display exam timing. There are 4 divisions in school as A,B,C,D. Exam
// of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
// (Application should be case insensitive)
// Input : C
// Output : Your exam at 9.20 AM
// Input : d
// Output : Your exam at 10.30 AM

#include<stdio.h>

void ExamTime(char ch1)
{
    switch(ch1)
    {
        case 'a':
        case 'A':
        
                printf("Exam of division A is at 7 AM");
                break;
        case 'b':
        case 'B':
         
                printf("Exam of division A is at 8.30 AM");
                break;
        case 'c':
        case 'C':
           printf("Exam of division A is at 9.20 AM");
            break;
        case 'd':
        case 'D':
            printf("Exam of division A is at 10.30 AM");
            break;
        default:
            printf("ERROR:Invalid Input");
        
    }
}
int main()
{
    char ch='\0';

    printf("Enter your Division\n");
    scanf("%c",&ch);

    ExamTime(ch);
    return 0;
}