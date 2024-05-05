/* Watson Elementary School contains 10 classrooms numbered 1 to 10. Each classroom can contain any number of
 students up to 12. Each student takes an achievement test at the end of the school year and receives a score
 from 0 through 100. Write a program that accepts data for each student in the school such as student ID,
 classroom number, and score on the achievement test. Design a program that lists the total points scored
 for each of the 10 classrooms.*/
# include<stdio.h>
int main()
{
    int stud_ID[12], mark_scored[12], total=0;
    int student, classroom, i, j;

    printf("Enter the number of classroom:\n");
    scanf("%d", &classroom);

  if (classroom > 10 || classroom<1)
  {
    printf("Error: The number of classroom must be between 1 to 10");
  }
  else
  {
    printf("Enter the number of students in classroom:\n");
    scanf("%d", &student);

    if (student > 12 || student<1)
    {
      printf("Error: The number of student must be between 1 to 12");
    }
    else
    {
     for ( i = 1; i <= classroom ; i++)
     {
      for ( j = 1; j <= student; j++)
      {
        printf("Enter the student ID for student number%d:\n",j);
        scanf("%d",&stud_ID[j]);
        printf("Enter the marks for student with student ID %d:\n",j);
        scanf("%d",&mark_scored[j]);
        total = total+ mark_scored[j];
      }
      printf("Total points scored by classroom number %d = %d\n",i,total);
      total=0;
     }
     
    }

  }
    return 0;
}


