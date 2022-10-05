// Allocation of memory for structure dynamically
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};//decalred a structure

struct student *s = NULL; //declared a pointer to structure

int main()
{
    s = (struct student *)malloc(sizeof(struct student)); // allocated memory to pointer
    clrscr();

    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
    printf("\nRoll number: %d", s->roll);
    printf("\nName: %s", s->name);
    printf("\nMarks: %f", s->marks);
    getch();
    return 0;
}// end of main fuction

/*
Output:
    Enter roll number: 99
    Enter name: kunal
    Enter marks: 98

    Roll number: 99
    Name: kunal
    Marks: 98.000000

*/