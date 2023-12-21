// // dynamic memory allocation and structures 

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// struct student
// {
//     int roll_no;
//     char name[20];
//     float marks;
// };

// int main(){
//     struct student*ptr = (struct student*)malloc(sizeof(struct student));
//     int n;
//     printf("\nEnter number of students : ");
//     scanf("%d",&n);


//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter Roll No. of student %d : ",i+1);
//         scanf("%d",&(ptr[i].roll_no));

//         printf("Enter name of student %d : ",i+1);
//         scanf("%s",(ptr[i].name));

//         printf("Enter marks of student %d : ",i+1);
//         scanf("%f",&(ptr[i].marks));
//     }

//     printf("\nName\t\tRoll no\t\tMarks\t\tGrade\t\tRemarks");
//     printf("\n----------------------------------------------------------------");

//     for (int i = 0; i < n; i++)
//     {
//         printf("\n%s\t%d\t%f\t",ptr[i].name,ptr[i].roll_no,ptr[i].marks);
//         if (ptr[i].marks >= 80)
//         {
//             printf("A\tExcellent");
//         }
//         else if (ptr[i].marks >= 60)
//         {
//             printf("B\tGood");
//         }
//         else if (ptr[i].marks >= 40)
//         {
//             printf("C\tModerate");
//         }
//         else
//         {
//             printf("D\tPoor");
//         }
//     }
//     free(ptr);
//     return 0;
// }

//dynamic memory allocation using structures

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main(){
    struct student*ptr = (struct student*)malloc(sizeof(struct student));
    int n;
    printf("\nEnter number of students : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter Roll No. of student %d : ",i+1);
        scanf("%d",&(ptr[i].roll_no));

        printf("Enter name of student %d : ",i+1);
        scanf("%s",ptr[i].name);

        printf("Enter marks of student %d : ",i+1);
        scanf("%f",&(ptr[i].marks));
    }

    printf("\nName\t\tRoll no\t\tMarks\t\tGrade\t\tRemarks");

    for (int i = 0; i < n; i++)
    {
        printf("\n%s\t\t%d\t\t%.2f\t\t",ptr[i].name,ptr[i].roll_no,ptr[i].marks);
        if (ptr[i].marks >= 80)
        {
            printf("A\t\tExcellent");
        }
        else if (ptr[i].marks >= 60)
        {
            printf("B\t\tGood");
        }
        else if (ptr[i].marks >= 40)
        {
            printf("C\t\tModerate");
        }
        else
        {
            printf("D\t\tPoor");
        }
    }

    free(ptr);

    return 0;

}

