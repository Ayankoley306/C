#include <stdio.h>
#include <string.h>
int work();
int countcharactor(FILE *file);
int wordcount(FILE *file);
int countvowel(FILE *file);
int main()
{
  printf("\t<--:WELCOME:-->\n");
  FILE *file;
  file = fopen("text.txt", "r");
  if (file == NULL)
  {
    printf("File not found!\n");
    return 0;
  }
  else
  {
    printf("File found successfully!\n");
  }
  int choice = 4;
  while (choice != 0)
  {
    if (choice == 4)
    {
      choice = work();
    }
    else if (choice == 1)
    {
      choice = wordcount(file);
      rewind(file);
    }
    else if (choice == 2)
    {
      choice = countcharactor(file);
      rewind(file);
    }
    else if (choice == 3)
    {
      choice = countvowel(file);
      rewind(file);
    }
  }

  printf("\t<--:THANK YOU:-->\n");
  fclose(file);
  return 0;
}

int work()
{
  int choice = 4;
  printf("Total Word Count (1):-\nTotal Charactor Count (2):-\nTotal vower Count(3):-\nExit (0):-\n==> ");
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
    printf("Please enter valid code:-\n");
    return 4;
  }
}

int countcharactor(FILE *file)
{
  char ch;
  int count = 0;
  while ((ch = fgetc(file)) != EOF)
  {
    count++;
  }
  printf("Total charactor is %d\n", count);
  printf("-----------------------------------------\n");
  return 4;
}

int wordcount(FILE *file)
{
  char ch;
  int inword = 0;
  int countword = 0;
  while ((ch = fgetc(file)) != EOF)
  {
    if (ch == ' ' || ch == '\t' || ch == '\n')
    {
      inword = 0;
    }
    else if (inword == 0)
    {
      inword = 1;
      countword++;
    }
  }
  printf("Total word %d\n", countword);
  printf("-----------------------------------------\n");
  return 4;
}

int countvowel(FILE *file)
{
  char ch;
  int count = 0;
  while ((ch = fgetc(file)) != EOF)
  {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
      count++;
    }
  }
  printf("There is %d vowels in the text\n", count);
  printf("-----------------------------------------\n");
  return 4;
}