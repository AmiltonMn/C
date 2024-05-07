#include <stdio.h>
#include <conio.h>

typedef struct Ex3
{
    int matriculation;
    char name[30];
    int grades[3], media;
} Students;

int main()
{
    int biggestGrade = 0, sum, biggestMean, smallestMean;
    Students students[5];

    for(int i = 0; i < 5; i ++)
    {
        printf("Type the name of the %d student: ", i+1);
        scanf("%s", students[i].name);
        printf("Type the matriculation of the student %s: ", students[i].name);
        scanf("%d", &students[i].matriculation);
        for (int j = 0; j < 3; j++)
        {
            printf("Type the %d grade of the student %s: ", j+1, students[i].name);
            scanf("%d", &students[i].grades[j]);
        }
    };

    for (int i = 0; i < 5; i++)
    {
        sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += students[i].grades[j];
        }

        students[i].media = sum / 3;

        biggestMean = (students[i].media > biggestMean) ? i : biggestMean;
        smallestMean = (students[i].media < smallestMean) ? i : smallestMean;
    }

    for (int i = 0; i < 5; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            if (students[i].grades[j] > biggestGrade)
            {
                biggestGrade = students[i].grades[j];
            }
        }
    }

    system("cls");
    printf("-=-=-=-=-=-=- STUDENTS IANES -=-=-=-=-=-=-\n");
    for (int i = 0; i < 5; i ++)
    {
        printf("Name: %s. Mean: %d. Status: %s.\t\n", students[i].name, students[i].media, (students[i].media > 6) ? "Approved" : "Disapproved");
    }
    printf("The biggest mean was from: %s\n", students[biggestMean].name);
    printf("The smallest mean was from: %s\n", students[smallestMean].name);
    printf("The biggest note on the first exam was: %d\n", biggestGrade);

}