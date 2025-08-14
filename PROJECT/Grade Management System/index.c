#include <stdio.h>
#include <string.h>
struct student
{
  int roll;
  char name[25];
  int bengali;
  int english;
  int accountncy;
  int cost_tax;
  int coma;
  int total;
  char grade;
};
int work();
int enterdata(int i, struct student a[]);
void seedata(struct student a[]);
int main()
{
  struct student XII[60];
  int idx = 0;
  int running = 1;

  while (running)
  {
    int choice = work();
    if (choice == 1)
    {
      idx = enterdata(idx, XII);
    }
    else if (choice == 2)
    {
      seedata(XII);
    }
    else if (choice == 3)
    {
      printf("-:THANK YOU:-");
      return 0;
    }
  }
}
// core functions
int work()
{
  int choice = 0;
  printf("1. Enter Data(1):--\n2. Check Data(2):--\n3. Quit program(3):--\nEnter code: ");
  scanf("%d", &choice);
  if (choice == 1)
  {
    return 1;
  }
  else if (choice == 2)
  {
    return 2;
  }
  else if (choice == 3)
  {
    return 3;
  }
  else
  {
    printf("error: please enter valid input\n");
    printf("Try again!\n");
    return 0;
  }
}
int enterdata(int i, struct student a[])
{
  printf("Enter Student data:-->\nName: ");
  scanf("%s", a[i].name);
  printf("Roll No.: ");
  scanf("%d", &a[i].roll);
  printf("Bengali: ");
  scanf("%d", &a[i].bengali);
  printf("English: ");
  scanf("%d", &a[i].english);
  printf("Accountancy: ");
  scanf("%d", &a[i].accountncy);
  printf("Cost & Tax: ");
  scanf("%d", &a[i].cost_tax);
  printf("Computer Application: ");
  scanf("%d", &a[i].coma);
  if (strlen(a[i].name) > 0 && a[i].roll != 0 && a[i].bengali != 0 && a[i].english != 0 && a[i].accountncy != 0 && a[i].cost_tax != 0 && a[i].coma != 0)
  {
    a[i].total = a[i].bengali + a[i].english + a[i].accountncy + a[i].cost_tax + a[i].coma;
    // grade
    if (a[i].total > 450 && a[i].total <= 500)
    {
      a[i].grade = 'O';
    }
    else if (a[i].total <= 450 && a[i].total > 350)
    {
      a[i].grade = 'A';
    }
    else if (a[i].total <= 350 && a[i].total > 250)
    {
      a[i].grade = 'B';
    }
    else if (a[i].total <= 250 && a[i].total > 200)
    {
      a[i].grade = 'C';
    }
    else if (a[i].total <= 200 && a[i].total > 150)
    {
      a[i].grade = 'P';
    }
    else if (a[i].total <= 150 && a[i].total > 0)
    {
      a[i].grade = 'F';
    }
    i++;
    return i;
  }
  else
  {
    int v = i;
    printf("please enter valid information");
    enterdata(v, a);
    return i;
  }
}

void seedata(struct student a[])
{
  int r, found = 0;
  printf("Enter Roll Number: ");
  scanf("%d", &r);
  for (int i = 0; i <= 60; i++)
  {
    if (a[i].roll == r)
    {
      printf("Name: %s\nRoll NO.: %d\nBengali: %d\nEnglish: %d\nAccountency: %d\nCosting & Taxing: %d\nComputer Application: %d\nTotal: %d\nGrade: %c\n", a[i].name, a[i].roll, a[i].bengali, a[i].english, a[i].accountncy, a[i].cost_tax, a[i].coma, a[i].total, a[i].grade);
      found = 1;
    }
  }
  if (!found)
  {
    printf("Student data has not enter yet\n");
  }
}
