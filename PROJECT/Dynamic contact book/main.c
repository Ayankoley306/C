#include <stdio.h>
#include <string.h>
struct number
{
  char name[25];
  unsigned long long number;
  char email[40];
};
int work();
int Newnumber(struct number n[], int i);
int checkemail(struct number n[], int i);
int seedata();
int main()
{
  FILE *fnum;
  fnum = fopen("Number.txt", "a+");
  if (fnum == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }
  struct number student[60];
  int idx = 0;
  int choice = 1;
  while (choice != 0)
  {
    choice = work();

    if (choice == 2)
    {
      int result = Newnumber(student, idx);
      if (result == 1)
      {
        // Data saved successfully
        printf("Name: %s\t", student[idx].name);
        printf("Number: %llu\t", student[idx].number);
        printf("Email: %s\n", student[idx].email);

        fprintf(fnum, "Name: %s\t", student[idx].name);
        fprintf(fnum, "Number: %llu\t", student[idx].number);
        fprintf(fnum, "Email: %s\n", student[idx].email);
        idx++;
      }
    }
    else if (choice == 3)
    {
      choice = seedata();
    }
    else if (choice == 4)
    {
      printf("THANK YOU!\n");
      fclose(fnum);
      return 0;
    }
  }

  fclose(fnum);
  return 0;
}

int work()
{
  int c = 0;
  printf("\n1. Enter new number (1)\n2. See data (2)\n3. Quit program (3)\nEnter Code: ");
  scanf("%d", &c);
  if (c == 1)
  {
    return 2;
  }
  else if (c == 2)
  {
    return 3;
  }
  else if (c == 3)
  {
    return 4;
  }
  else
  {
    return 1;
  }
}

int Newnumber(struct number n[], int i)
{
  printf("Fill up the details-->\nName: ");
  scanf("%s", n[i].name);

  printf("Phone Number: ");
  scanf("%llu", &n[i].number);
  if (n[i].number <= 1000000000 && n[i].number >= 9999999999)
  {
    printf("Please enter a valid 10-digit number!\n");
    return 0;
  }

  while (getchar() != '\n')
    ; // clear buffer

  printf("Email: ");
  fgets(n[i].email, 40, stdin);
  n[i].email[strcspn(n[i].email, "\n")] = 0; // remove newline

  if (!checkemail(n, i))
  {
    printf("Please enter a valid email (must contain '@')!\n");
    return 0;
  }

  printf("Your data has been saved successfully!\n");
  return 1;
}

int checkemail(struct number n[], int i)
{
  for (int j = 0; j < strlen(n[i].email); j++)
  {
    if (n[i].email[j] == '@')
    {
      return 1;
    }
  }
  return 0;
}

int seedata()
{
  FILE *ptr = fopen("Number.txt", "r");
  char query[50];
  char line[256];
  int found = 0;
  printf("Enter number or name to search: ");
  scanf("%s", query);
  while (fgets(line, sizeof(line), ptr))
  {
    if (strstr(line, query))
    {
      printf("Match found: %s", line);
      found = 1;
    }
  }
  if (!found)
  {
    printf("match not found!");
    return 1;
  }
  return 1;
}