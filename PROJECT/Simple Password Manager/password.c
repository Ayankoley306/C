#include <stdio.h>
#include <string.h>

int creatpassword();
int main()
{
  printf("\t-:WELCOME:-\n");
  int choice = 1;
  while (choice != 0)
  {
    choice = creatpassword();
  }
  printf("\t-:THANK YOU:-");
}
int creatpassword()
{
  printf("Enter your password(Password must content charactor,numbesr,special charactor) :-->\n==> ");
  char password[64] = {""};
  scanf("%s", &password);
  int isNum = 0, isChar = 0, isSpCh = 0;
  if (strlen(password) >= 8)
  {
    for (int i = 0; i < strlen(password); i++)
    {
      if (password[i] >= 'a' && password[i] <= 'z' || password[i] >= 'A' && password[i] <= 'Z')
      {
        isChar = 1;
      }
      else if (password[i] >= '0' && password[i] <= '9')
      {
        isNum = 1;
      }
      else if (password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '&' || password[i] == '~')
      {
        isSpCh = 1;
      }
    }
    if (!isChar)
    {
      char ch;
      printf("password must containts charactor!\nTry Again!(y/n)\n=> ");
      scanf(" %c", &ch);
      if (ch == 'Y' || ch == 'y')
      {
        return 1;
      }
      return 0;
    }
    else if (!isNum)
    {
      char ch;
      printf("password must containts numbers!\nTry Again!(y/n)\n=> ");
      scanf(" %c", &ch);
      if (ch == 'Y' || ch == 'y')
      {
        return 1;
      }
      return 0;
    }
    else if (!isSpCh)
    {
      char ch;
      printf("Password must containts special Charactors\nTry Again!(y/n)\n=> ");
      scanf(" %c", &ch);
      if (ch == 'Y' || ch == 'y')
      {
        return 1;
      }
      return 0;
    }
  }
  else
  {
    char ch;
    printf("password must contains 8 characters!\nRe-enter password(y/n)\n=> ");
    scanf(" %c", &ch);
    if (ch == 'Y' || ch == 'y')
    {
      return 1;
    }
    return 0;
  }
  printf("Generated Password: %s\n", password);
  printf("Want to create new password(y/n)\n=> ");
  char ch;
  scanf(" %c", &ch);
  if (ch == 'Y' || ch == 'y')
  {
    return 1;
  }
  return 0;
}