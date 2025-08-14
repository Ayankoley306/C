#include <stdio.h>
#include <string.h>
struct marks
{
  char name[30];
  int roll;
  int marks;
  char grade;
};
int add(struct marks x[], int i);
int data(struct marks x[]);
int studentdata(struct marks x[]);
int allStudentData(struct marks x[]);
int main()
{
  struct marks XII[53];
  int choice = 4;
  int idx = 0;
  printf("<--:WELCOME:-->\n");
  while (choice != 0)
  {
    if (choice == 4)
    {
      printf("Enter student details (1)\nSee student details (2)\nQuit program (3)\nEnter Code: ");
      scanf("%d", &choice);
    }
    else if (choice == 1)
    {
      choice = add(XII, idx);
      idx++;
    }
    else if (choice == 2)
    {
      choice = data(XII);
    }
    else if (choice == 3)
    {
      printf("THANK YOU");
      return 0;
    }
    else
    {
      return 0;
    }
  }
  return 0;
}

int add(struct marks x[], int i)
{
  FILE *fmarks = fopen("marks.txt", "a");
  printf("Enter Student Details As Followed-->\nName: ");
  scanf("%s", x[i].name);
  if (strlen(x[i].name) == 0)
  {
    printf("please enter name correctly\n");
    return 1;
  }
  printf("Roll No.: ");
  scanf("%d", &x[i].roll);
  if (x[i].roll < 1 || x[i].roll > 53)
  {
    printf("Please enter valid roll number!\n");
    return 1;
  }
  printf("Total marks: ");
  scanf("%d", &x[i].marks);
  if (x[i].marks < 0 || x[i].marks >= 500)
  {
    printf("Please enter valid marks!\n");
    return 1;
  }
  if (x[i].marks <= 150)
  {
    x[i].grade = 'F';
  }
  else if (x[i].marks <= 250)
  {
    x[i].grade = 'C';
  }
  else if (x[i].marks <= 350)
  {
    x[i].grade = 'B';
  }
  else if (x[i].marks <= 450)
  {
    x[i].grade = 'A';
  }
  else if (x[i].marks <= 500)
  {
    x[i].grade = 'O';
  }
  printf("Gread: %c\n", x[i].grade);
  printf("Student data entered successfully\n");
  fprintf(fmarks, "Name: %s\t", x[i].name);
  fprintf(fmarks, "Roll No.: %d\t", x[i].roll);
  fprintf(fmarks, "Marks: %d\t", x[i].marks);
  fprintf(fmarks, "Grade: %c\n", x[i].grade);
  printf("student data stored successfully!\n");
  fclose(fmarks);
  char c[5];
  printf("Do you want to enter more student data (yes/no): ");
  scanf(" %s", &c);
  if (c[0] == 'y')
  {
    return 1;
  }
  return 4;
}

int data(struct marks x[])
{
  int choice = 0;
  while (choice != 3)
  {
    if (choice == 0)
    {
      printf("See individual Student Data (1)\nSee All Student data (2)\nMain menu (3)\nEnter Code: ");
      scanf("%d", &choice);
    }
    else if (choice == 1)
    {
      choice = studentdata(x);
    }
    else if (choice == 2)
    {
      choice = allStudentData(x);
    }
  }
  return 4;
}

int studentdata(struct marks x[])
{
  FILE *fdata = fopen("marks.txt", "r");
  char line[255];
  char query[100];
  int found = 0;
  printf("Enter Student Roll No.: ");
  scanf("%s", query);
  while (fgets(line, sizeof(line), fdata))
  {
    if (strstr(line, query))
    {
      printf("%s", line);
      found = 1;
    }
  }

  if (!found)
  {
    printf("Student data not found!\n");
    char c[5];
    printf("Do you want to try again! (yes/no): ");
    scanf(" %s", &c);
    if (c[0] == 'y')
    {
      fclose(fdata);
      return 1;
    }
  }
  char c[5];
  printf("Do you want to see other student details (yes/no): ");
  scanf(" %s", &c);
  if (c[0] == 'y')
  {
    fclose(fdata);
    return 1;
  }
  fclose(fdata);
  return 0;
}

int allStudentData(struct marks x[])
{
  FILE *fmarks = fopen("marks.txt", "r");
  char line[255];
  int i = 1;
  while (fgets(line, sizeof(line), fmarks))
  {
    printf("%d.\t", i);
    printf("%s", line);
    printf("\n");
    i++;
  }
  fclose(fmarks);
  return 0;
}
