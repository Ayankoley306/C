#include <stdio.h>
#include <string.h>
struct student
{
  char Name[50];
  int Roll;
  int Bengali;
  int english;
  int Accountancy;
  int Cost_tax;
  int Coma;
  int total;
  char grade[5];
};

#define MAINMENU 6
int storeData(FILE *file, struct student stu[]);
int main_menu();
int adddata(FILE *file, struct student stu[], int *i);
int seedata(struct student stu[], int idx);
int studentdata(struct student stu[], int idx);
int allstudentdata(struct student stu[], int idx);
int ranks(struct student stu[], int idx);
int alterdata(struct student stu[], int idx);
int editdata(struct student stu[], int idx);
int deletedata(struct student stu[], int *idx);

int main()
{
  FILE *fstu = fopen("student.txt", "a+");
  if (fstu == NULL)
  {
    printf("File not found!\n");
    printf("Exiting the program...\n");
    return 0;
  }
  else
  {
    printf("Loading Data From File Wait A Moment......\n");
  }
  struct student XII[60];
  int idx = storeData(fstu, XII);
  printf("\t<--:WELCOME:-->\n");
  int choice = MAINMENU;
  while (choice != 0)
  {
    if (choice == MAINMENU)
    {
      choice = main_menu();
    }
    else if (choice == 1)
    {
      choice = adddata(fstu, XII, &idx);
      fflush(fstu);
    }
    else if (choice == 2)
    {
      choice = seedata(XII, idx);
      fflush(fstu);
    }
    else if (choice == 3)
    {
      fclose(fstu);
      choice = alterdata(XII, idx);
      fstu = fopen("student.txt", "a+");
    }
    else if (choice == 0)
    {
      printf("Thank you for using the program!\n");
      fclose(fstu);
      printf("Exiting the program...\n");
      return 0;
    }
  }
  fflush(fstu);
  fclose(fstu);
  printf("Exiting the program...\n");
  return 0;
}

int storeData(FILE *file, struct student stu[])
{
  int idx = 0;
  rewind(file);
  char buffer[256];
  while (fgets(buffer, sizeof(buffer), file))
  {
    sscanf(buffer, "%s %d %d %d %d %d %d %d %s", stu[idx].Name, &stu[idx].Roll, &stu[idx].Bengali, &stu[idx].english, &stu[idx].Accountancy, &stu[idx].Cost_tax, &stu[idx].Coma, &stu[idx].total, stu[idx].grade);
    idx++;
  }
  printf("Data loaded successfully!\n Total records: %d\n", idx);
  return idx;
}

int main_menu()
{
  int choice = 0;
  printf("Operations-->\nEnter New Student Data (1):-\nSee Student Data (2):-\n3. Alter Student Data (3)\nQuit (0):-\nEnter Code: ");
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
  else if (choice == 0)
  {
    return 0;
  }
  else
  {
    printf("Please Enter Correct Code!\n");
    return MAINMENU;
  }
}

int adddata(FILE *file, struct student stu[], int *i)
{
  printf("Enter Student Data:->\nName: ");
  if (strlen(stu[*i].Name) == 0)
  {
    printf("Please enter name correctly!\n");
    return 1;
  }
  printf("Roll No.: ");
  scanf("%d", &stu[*i].Roll);
  if (stu[*i].Roll < 1 || stu[*i].Roll >= 60)
  {
    printf("Please enter correct roll number!\n");
    return 1;
  }
  for (int j = 0; j < *i; j++)
  {
    if (stu[j].Roll == stu[*i].Roll)
    {
      printf("Roll number already exists!\n");
      return 1;
    }
  }
  printf("Bengali: ");
  scanf("%d", &stu[*i].Bengali);
  if (stu[*i].Bengali < 1 || stu[*i].Bengali > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  printf("English: ");
  scanf("%d", &stu[*i].english);
  if (stu[*i].english < 1 || stu[*i].english > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  printf("Accountancy: ");
  scanf("%d", &stu[*i].Accountancy);
  if (stu[*i].Accountancy < 1 || stu[*i].Accountancy > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  printf("Costing And Taxing: ");
  scanf("%d", &stu[*i].Cost_tax);
  if (stu[*i].Cost_tax < 1 || stu[*i].Cost_tax > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  printf("Computer Application: ");
  scanf("%d", &stu[*i].Coma);
  if (stu[*i].Coma < 1 || stu[*i].Coma > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  // Total marks
  stu[*i].total = stu[*i].Bengali + stu[*i].english + stu[*i].Accountancy + stu[*i].Cost_tax + stu[*i].Coma;
  printf("Total marks: %d\n", stu[*i].total);
  // Grade
  if (stu[*i].total >= 450)
  {
    strcpy(stu[*i].grade, "O");
  }
  else if (stu[*i].total >= 400)
  {
    strcpy(stu[*i].grade, "A+");
  }
  else if (stu[*i].total >= 350)
  {
    strcpy(stu[*i].grade, "A");
  }
  else if (stu[*i].total >= 300)
  {
    strcpy(stu[*i].grade, "B+");
  }
  else if (stu[*i].total >= 250)
  {
    strcpy(stu[*i].grade, "B");
  }
  else if (stu[*i].total >= 150)
  {
    strcpy(stu[*i].grade, "C");
  }
  else
  {
    strcpy(stu[*i].grade, "F");
  }
  printf("Gread: %s\n", stu[*i].grade);
  // print data
  fprintf(file, "%s %d %d %d %d %d %d %d %s\n", stu[*i].Name, stu[*i].Roll, stu[*i].Bengali, stu[*i].english, stu[*i].Accountancy, stu[*i].Cost_tax, stu[*i].Coma, stu[*i].total, stu[*i].grade);
  (*i)++;
  printf("Data added successfully!\n");
  fflush(file);
  char choice[5];
  printf("Do you want to add more data? (yes/no): ");
  scanf(" %s", &choice);
  if (choice[0] == 'y' || choice[0] == 'Y')
  {
    return 1; // Continue adding data
  }
  else
  {
    printf("Returning to main menu...\n");
    return MAINMENU; // Return to main menu
  }
  return MAINMENU;
}

int seedata(struct student stu[], int idx)
{
  int choice;
  printf("1. See individual student data (1)\n2. See all student data (2)\n3. Student ranks (3)\n4. Return to main menu (0)\nEnter your choice: ");
  scanf("%d", &choice);
  if (choice == 1)
  {
    studentdata(stu, idx);
  }
  else if (choice == 2)
  {
    allstudentdata(stu, idx);
  }
  else if (choice == 3)
  {
    ranks(stu, idx);
  }
  else if (choice == 0)
  {
    return MAINMENU; // Return to main menu
  }
  else
  {
    printf("Please enter a valid choice!\n");
    return seedata(stu, idx); // Retry
  }
}

int studentdata(struct student stu[], int idx)
{
  int roll = 0;
  printf("Enter Roll Number of the student: ");
  scanf("%d", &roll);
  for (int j = 0; j < idx; j++)
  {
    if (stu[j].Roll == roll)
    {
      printf("Name: %s\n", stu[j].Name);
      printf("Roll No.: %d\n", stu[j].Roll);
      printf("Bengali: %d\n", stu[j].Bengali);
      printf("English: %d\n", stu[j].english);
      printf("Accountancy: %d\n", stu[j].Accountancy);
      printf("Costing And Taxing: %d\n", stu[j].Cost_tax);
      printf("Computer Application: %d\n", stu[j].Coma);
      printf("Total Marks: %d\n", stu[j].total);
      printf("Grade: %s\n", stu[j].grade);
      char choice[5];
      printf("Do you want to see another student's data? (Yes/No): ");
      scanf("%s", &choice);
      if (choice[0] == 'y' || choice[0] == 'Y')
      {
        return studentdata(stu, idx); // Continue to see another student's data
      }
    }
  }
  printf("Returning to main menu...\n");
  return seedata(stu, idx);
}

int allstudentdata(struct student stu[], int idx)
{
  printf("All Student Data:\n");
  for (int j = 0; j < idx; j++)
  {
    printf("\nName: %s\t", stu[j].Name);
    printf("Roll No.: %d\t", stu[j].Roll);
    printf("Total Marks: %d\t", stu[j].total);
    printf("Grade: %s\n", stu[j].grade);
    printf("-----------------------------\n");
  }
  char choice[5];
  printf("Do you want to see individual student data? (Yes/No): ");
  scanf("%s", &choice);
  if (choice[0] == 'y' || choice[0] == 'Y')
  {
    return seedata(stu, idx); // Go back to see individual student data
  }
  else
  {
    return MAINMENU; // Return to main menu
  }
}

int ranks(struct student stu[], int idx)
{
  printf("Calculating student ranks based on total marks...\n");
  if (idx == 0)
  {
    printf("No student data available to rank.\n");
    return seedata(stu, idx); // Go back to see individual student data
  }
  for (int i = 0; i < idx - 1; i++)
  {
    for (int j = i + 1; j < idx; j++)
    {
      if (stu[i].total < stu[j].total)
      {
        struct student temp = stu[i];
        stu[i] = stu[j];
        stu[j] = temp;
      }
    }
  }

  printf("Student Ranks:\n");
  for (int i = 0; i < idx; i++)
  {
    printf("Rank %d: %s, Roll No.: %d, Total Marks: %d, Grade: %s\n", i + 1, stu[i].Name, stu[i].Roll, stu[i].total, stu[i].grade);
  }

  char choice[5];
  printf("Do you want to see individual student data? (Yes/No): ");
  scanf("%s", &choice);
  if (choice[0] == 'y' || choice[0] == 'Y')
  {
    return seedata(stu, idx); // Go back to see individual student data
  }

  return MAINMENU; // Return to main menu
}

int alterdata(struct student stu[], int idx)
{
  int choice = 0;
  printf("1. Edit Student Data (1)\n2. Delete Student Data (2)\n3. Main Menu (3)\nEnter Code:- ");
  scanf("%d", &choice);
  if (choice == 1)
  {
    editdata(stu, idx);
  }
  else if (choice == 2)
  {
    deletedata(stu, &idx);
  }
  else if (choice == 3)
  {
    printf("Returning to main menu!\n");
    return MAINMENU;
  }
  else
  {
    printf("Invalid Choice!\n");
    return MAINMENU;
  }
}

int editdata(struct student stu[], int index)
{
  FILE *efile = fopen("student.txt", "w+");
  int roll, idx, found = 0;
  printf("Enter Student roll Number: ");
  scanf("%d", &roll);
  for (int i = 0; i < index; i++)
  {
    if (stu[i].Roll == roll)
    {
      idx = i;
      found = 1;
    }
  }
  if (!found)
  {
    printf("No Student Data Found!\nTry Again!\n");
    return editdata(stu, index);
  }
  printf("Enter Student Data:->\nName: ");
  scanf("%s", stu[idx].Name);
  if (strlen(stu[idx].Name) == 0)
  {
    printf("Please enter name correctly!\n");
    return 1;
  }
  printf("Roll No.: ");
  scanf("%d", &stu[idx].Roll);
  if (stu[idx].Roll < 1 || stu[idx].Roll >= 60)
  {
    printf("Please enter correct roll number!\n");
    return 1;
  }
  printf("Bengali: ");
  scanf("%d", &stu[idx].Bengali);
  if (stu[idx].Bengali < 1 || stu[idx].Bengali > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  printf("English: ");
  scanf("%d", &stu[idx].english);
  if (stu[idx].english < 1 || stu[idx].english > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  printf("Accountancy: ");
  scanf("%d", &stu[idx].Accountancy);
  if (stu[idx].Accountancy < 1 || stu[idx].Accountancy > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  printf("Costing And Taxing: ");
  scanf("%d", &stu[idx].Cost_tax);
  if (stu[idx].Cost_tax < 1 || stu[idx].Cost_tax > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  printf("Computer Application: ");
  scanf("%d", &stu[idx].Coma);
  if (stu[idx].Coma < 1 || stu[idx].Coma > 100)
  {
    printf("Please enter your marks correctly!\n");
    return 1;
  }
  // Total marks
  stu[idx].total = stu[idx].Bengali + stu[idx].english + stu[idx].Accountancy + stu[idx].Cost_tax + stu[idx].Coma;
  printf("Total marks: %d\n", stu[idx].total);
  // Grade
  if (stu[idx].total >= 450)
  {
    strcpy(stu[idx].grade, "O");
  }
  else if (stu[idx].total >= 400)
  {
    strcpy(stu[idx].grade, "A+");
  }
  else if (stu[idx].total >= 350)
  {
    strcpy(stu[idx].grade, "A");
  }
  else if (stu[idx].total >= 300)
  {
    strcpy(stu[idx].grade, "B+");
  }
  else if (stu[idx].total >= 250)
  {
    strcpy(stu[idx].grade, "B");
  }
  else if (stu[idx].total >= 150)
  {
    strcpy(stu[idx].grade, "C");
  }
  else
  {
    strcpy(stu[idx].grade, "F");
  }
  printf("Gread: %s\n", stu[idx].grade);
  // print data
  for (int p = 0; p < index; p++)
  {
    fprintf(efile, "%s %d %d %d %d %d %d %d %s\n", stu[p].Name, stu[p].Roll, stu[p].Bengali, stu[p].english, stu[p].Accountancy, stu[p].Cost_tax, stu[p].Coma, stu[p].total, stu[p].grade);
  }
  fflush(efile);
  printf("Data Updated successfully!\n");
  fclose(efile);
  return alterdata(stu, index);
}

int deletedata(struct student stu[], int *index)
{
  int roll, idx = -1;
  printf("Enter Student roll number: ");
  scanf("%d", &roll);
  for (int i = 0; i < *index; i++)
  {
    if (stu[i].Roll == roll)
    {
      idx = i;
      break;
    }
  }
  if (idx == -1)
  {
    printf("This roll number has no data!\nTry again!\n");
    return alterdata(stu, *index);
  }
  for (int j = idx; j < *index - 1; j++)
  {
    stu[j] = stu[j + 1];
  }
  printf("Student data delete successfully!\n");
  FILE *Dfile = fopen("student.txt", "w");
  for (int p = 0; p < *index - 1; p++)
  {
    fprintf(Dfile, "%s %d %d %d %d %d %d %d %s\n", stu[p].Name, stu[p].Roll, stu[p].Bengali, stu[p].english, stu[p].Accountancy, stu[p].Cost_tax, stu[p].Coma, stu[p].total, stu[p].grade);
  }
  fflush(Dfile);
  fclose(Dfile);
  (*index)--;
  return alterdata(stu, *index);
}