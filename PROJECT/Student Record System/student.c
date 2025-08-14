#include <stdio.h>
#include <string.h>
struct student
{
  char name[25];
  int roll;
  char class[10];
  int total;
  char grade;
};
int work();
int add(struct student s);
int search(struct student s);
int main()
{
  int choice = 1;
  struct student stu;
  while (choice != 0)
  {
    if (choice == 1)
    {
      choice = work();
    }
    else if (choice == 2)
    {
      choice = add(stu);
    }
    else if (choice == 3)
    {
      choice = search(stu);
    }
  }
  printf("\t-:THAKN YOU:-");
}
int work()
{
  int choice = 0;
  if (choice == 0)
  {
    printf("Add student data (1)\nCheck student data (2)\nQuit (3)\nEnter code: ");
    scanf("%d", &choice);
  }
  if (choice == 1)
  {
    return 2;
  }
  else if (choice == 2)
  {
    return 3;
  }
  else if (choice == 3)
  {
    return 0;
  }
  else
  {
    printf("Enter valid code!\n");
    return 1;
  }
}

int add(struct student s)
{
  FILE *fs = fopen("student.txt", "a+");
  printf("Enter Student Details:-->\nName: ");
  scanf("%s", s.name);
  if (strlen(s.name) <= 0)
  {
    printf("Please enter name correctly!\n");
    return 2;
  }
  printf("Roll No.: ");
  scanf("%d", &s.roll);
  if (s.roll <= 0)
  {
    printf("Please enter roll no. correctly!\n");
    return 2;
  }
  printf("Class: ");
  scanf("%s", s.class);
  if (strlen(s.class) <= 0)
  {
    printf("Please enter class correctly!\n");
    return 2;
  }
  printf("Total Marks: ");
  scanf("%d", &s.total);
  if (s.total <= 0 || s.total > 500)
  {
    printf("Please enter total correctly!\n");
    return 2;
  }
  if (s.total > 450 && s.total <= 500)
  {
    s.grade = 'O';
  }
  else if (s.total <= 450 && s.total > 350)
  {
    s.grade = 'A';
  }
  else if (s.total <= 350 && s.total > 250)
  {
    s.grade = 'B';
  }
  else if (s.total <= 250 && s.total > 200)
  {
    s.grade = 'C';
  }
  else if (s.total <= 200 && s.total > 150)
  {
    s.grade = 'P';
  }
  else if (s.total <= 150 && s.total > 0)
  {
    s.grade = 'F';
  }
  fprintf(fs, "Name: %s\t", s.name);
  fprintf(fs, "Roll No.: %d\t", s.roll);
  fprintf(fs, "Class: %s\t", s.class);
  fprintf(fs, "Total marks: %d\t", s.total);
  fprintf(fs, "Gread: %c\n", s.grade);
  fclose(fs);
  char c[5];
  printf("Do you want to enter new student data(yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y')
  {
    return 2;
  }
  return 1;
}

int search(struct student s)
{
  FILE *fs = fopen("student.txt", "a+");
  if (fs == NULL)
  {
    printf("File is not sync yet!");
    return 1;
  }
  char line[255];
  char query[100];
  int found = 0;
  printf("Enter Student name or Roll no.: ");
  scanf("%s", query);
  while (fgets(line, sizeof(line), fs))
  {
    if (strstr(line, query))
    {
      printf("%s", line);
      found = 1;
    }
  }
  if (!found)
  {
    printf("Not matched Try again\n");
    fclose(fs);
    return 2;
  }
  fclose(fs);
  char c[5];
  printf("Do you want to search again (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y')
  {
    return 3;
  }
  return 1;
}