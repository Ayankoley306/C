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
  // printf("Enter your password like this:-->\nspecial charactor part(only 1)\tcharactor part\tnumber part\n");

  char password[64] = {}; // final password and salt
  scanf("%s", password);
  int isNum = 0, isChar = 0, isSpCh = 1;
  if (strlen(password) > 10)
  {
    for (int i = 0; i < strlen(password); i++)
    {
      if (password[i] >= 'a' && password[i] <= 'z' || password[i] >= 'A' && password[i] <= 'Z')
      {
        isChar = 1;
      }
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