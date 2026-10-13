/*
PROJECT:GRADING SYSTEM
DESCRIPTION:A system to grade a student doing ICT
            at a college based on formative and summative
            marks
AUTHOR: Brian lembuch
DATE: 13/10/2026

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int formative_marks,summative_marks,total_marks;
    char grade,student_name[50],comment[20];

    printf("CDAAC GRADING SYSTEM\n");
    //capture inputs
    printf("Enter student Name");
    fgets(student_name,50,stdin);
    do{
        printf("Enter summative marks(0-50): ");
    scanf("%d",&summative_marks);
    if (summative_marks <0|| summative_marks > 50)  {
       printf("Invalid ,marks. Try again\n");
    }
    printf("Enter formative marks(0-50): ");
    scanf("%d",&formative_marks);
    if(formative_marks < 0|| formative_marks > 50); {
        printf("Invalid marks. Try again\n");
    }
    printf("Enter summative marks(0-50): ");
    scanf("%d",&summative_marks);
    if (summative_marks <0 || summative_marks > 50);  {
       printf("Invalid ,marks. Try again\n");
       do{

        printf("Enter formative marks(0-50): ");
        scanf("%d",&formative_marks);
        if (formative_marks < 0 || formative_marks > 50)
        printf("Invalid marks. Try again\n");
           } while (formative_marks < 0 || formative_marks > 50);

    do{
           printf("Enter summative marks(0-50): ");
           scanf("%d",&summative_marks);
        if (summative_marks <0 || summative_marks > 50)
           printf("Invalid ,marks. Try again\n");

    }while(summative_marks <0 || summative_marks > 50);
   total_marks = formative_marks + summative_marks;
    // marks modertion
    if(total_marks ==49) {
        total_marks = 50;
    }
    //check for technical fail
    if (formative_marks < 25 || summative_marks < 25) {
            total_marks =49;
    }
    //find grade
    if(total_marks >= 70) grade = 'A';
    else if(total_marks >= 60) grade = 'B';
    else if(total_marks >= 50) grade = 'C';
    else grade = 'D';
    switch(grade) {
    case 'A':
       strepy(comment,"Mastery");
         break;
    case 'B':
       strepy(comment,"Proficient");
         break;
    case 'C':
       strepy(comment,"Competent");
         break;
    case 'D':
       strepy(comment,"Not Yet Competent");
         break;
    default:
       strepy(comment,"M.M");
         break;
    }
    //output
    printf("Student name: %s\n",student_name);
    printf("Total marks: %d\n",total_marks);
    printf("Grade: %c\n",grade);
    printf("Comment:%s\n",comment);
    return 0;
    }


