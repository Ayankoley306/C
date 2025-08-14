#include <stdio.h>
#include <string.h>
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
  countcharactor(file);
  rewind(file);
  wordcount(file);
  rewind(file);
  countvowel(file);
  printf("THANK YOU");
  fclose(file);
  return 0;
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
  return 0;
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
  return 0;
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
  return 0;
}