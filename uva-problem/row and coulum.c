#include<stdio.h>
#include<conio.h>
void main()
{
    int stud[30][20],i,j;

    printf("\nEnter the rollno and marks:");
    for(i=0;i<3;i++)
    {
        scanf("%d%d",&stud[i][0],&stud[i][1]);

    }
    printf("\nRoll no \t marks");
    for(i=0;i<3;i++)
    {
        printf("\n%d\t%d\n",stud[i][0],stud[i][1]);
    }
    getch();
}

