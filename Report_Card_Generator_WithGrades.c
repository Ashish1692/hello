
// This C program is created for creating the report card of any student.
// In this program you can add your subjects
// this program has percentage & grades.
// you also can edit the grade values of your own.

#include <stdio.h>

int main()
{
    int m, p, c, b, e, i, t;
    float x;
    char A, B, C, D, F;

    printf("Enter Maths Marks :");
    scanf("%d", &m);

    printf("Enter Physics Marks :");
    scanf("%d", &p);

    printf("Enter Chemistry Marks :");
    scanf("%d", &c);

    printf("Enter Biology Marks :");
    scanf("%d", &b);

    printf("Enter English Marks :");
    scanf("%d", &e);

    printf("Enter IT Marks :");
    scanf("%d", &i);

    t = m + p + c + b + e + i;
    printf("Your Total Marks Are =%d \n", t);

    x = t / 6;
    printf("Your Marks in Percentages -:%f \n", x);

    if (x < 35)
    {
        printf("Try next time. :(");
    }
    else if (x == 35)
    {
        printf("Your Grade is F.\n");
        printf("You are pass! :)");
    }
    else if (x <= 50)
    {
        printf("Your Grade is D.\n");
        printf("Good.");
    }
    else if (x <= 70)
    {
        printf("Your Grade is C. \n");
        printf("Very Good.");
    }
    else if (x <= 90)
    {
        printf("Your Grade is B. \n");
        printf("Well Done. :)");
    }
    else if (x <= 100)
    {
        printf("Your Grade is A. \n");
        printf("Excellent... :):)");
    }
    else
    {
        printf("Invalid Error.. :(");
    }

    return 0;
}
