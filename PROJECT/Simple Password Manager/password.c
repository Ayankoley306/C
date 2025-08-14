#include <stdio.h>
#include <string.h>
int creatpassword();
int main()
{
  printf("WELCOME");
  int choice = 1;
  while (choice != 0)
  {
    choice = creatpassword();
  }
  printf("thank you");
}
int creatpassword()
{
  printf("Enter your password like this:-->\nspecial charactor part(only 1)\tcharector part\tnumber part\n");
  char sch[3];
  char ch[20];
  char num[20];
  char password[64] = {"007"}; // final password and salt
  scanf(" %s %s %s", sch, ch, num);
  strcat(password, sch);
  strcat(password, ch);
  strcat(password, num);
  if (strlen(password) > 10)
  {
    if (strlen(sch) == 0)
    {
      printf("please enter at least one special charactor!");
      return 1;
    }
    if (strlen(ch) == 0)
    {
      printf("please enter at least one charactor!");
      return 1;
    }
    if (strlen(num) == 0)
    {
      printf("please enter at least one number!");
      return 1;
    }
  }
  else
  {
    printf("password must contains 8 characters!\n Re-enter password");
    return 1;
  }
  printf("Generated Password: %s\n", password);
  return 0;
}