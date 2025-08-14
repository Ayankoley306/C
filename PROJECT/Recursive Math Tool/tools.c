#include <stdio.h>
#include <string.h>
int work();
int factorial();
int power();
int fibo();
int sumOfDigit();
int main()
{
  int choice = 1;
  choice = work();
  while (choice > 0 && choice <= 5)
  {
    if (choice == 5)
    {
      choice = work();
    }
    else if (choice == 1)
    {
      choice = factorial();
    }
    else if (choice == 2)
    {
      choice = power();
    }
    else if (choice == 3)
    {
      choice = fibo();
    }
    else if (choice == 4)
    {
      choice = sumOfDigit();
    }
  }
}
int work()
{
  int choice = 0;
  printf("Math Functions-->\nFactorial (1)\nPower (2)\nFibonacci (3)\nSum Of Digits (4)\nQuit program (5)\nEnter Code: ");
  scanf(" %d", &choice);
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
  else if (choice == 4)
  {
    return 4;
  }
  else if (choice == 5)
  {
    return 0;
  }
}
int factorial()
{
  int fac;
  printf("Enter the number for factorial: ");
  scanf("%d", &fac);
  int result = 1;
  for (int i = fac; i > 0; i--)
  {
    result *= i;
  }
  printf("The Factorial Of %d is %d\n", fac, result);
  char c[5];
  printf("Do you want to factorial of another number (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y')
  {
    return 1;
  }
  return 5;
}
int power()
{
  int num, pow, result;
  printf("Enter the number ");
  scanf("%d", &num);
  result = num;
  printf("Enter power: ");
  scanf("%d", &pow);
  for (int i = 1; i < pow; i++)
  {
    result *= num;
  }
  printf("%d To The Power %d IS %d\n", num, pow, result);
  char c[5];
  printf("Do you want power of another number (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y')
  {
    return 2;
  }
  return 5;
}
int fibo()
{
  int num;
  printf("Enter how many fibonacci number you want: ");
  scanf("%d", &num);
  printf("0\t1\t");
  int num1 = 0, num2 = 1, num3;
  for (int i = 0; i < num - 2; i++)
  {
    num3 = num1 + num2;
    num1 = num2;
    num2 = num3;
    printf("%d\t", num3);
  }
  printf("\n");
  char c[5];
  printf("Do you want more fibonacci numbers (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y')
  {
    return 3;
  }
  return 5;
}
int sumOfDigit()
{
  int num = 0;
  printf("Enter the number for sum of digits: ");
  scanf("%d", &num);
  int sum = 0;
  while (num != 0)
  {
    sum += (num % 10);
    num = num / 10;
  }
  printf("%d\n", sum);
  char c[5];
  printf("Do you want calculate sum of digits again (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y')
  {
    return 4;
  }
  return 5;
}