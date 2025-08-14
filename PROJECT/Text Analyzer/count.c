#include <stdio.h>
#include <string.h>
int main()
{
  int count = 0;
  char str[] = "Ayan is good boy";
  for (int i = 0; i < (int)strlen(str); i++)
  {
    count++;
  }
  printf("%d", count);
  return 0;
}
