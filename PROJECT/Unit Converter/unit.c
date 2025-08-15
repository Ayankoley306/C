#include <stdio.h>
char work();
char temperature();
char weight();
char length();
int main()
{
  printf("\t-:WELCOME TO UNIT CONVERTOR:-\n");
  char choice = 'a';
  while (choice != 'q' || choice == 'Q')
  {
    if (choice == 'a')
    {
      choice = work();
    }
    else if (choice == 't' || choice == 'T')
    {
      choice = temperature();
    }
    else if (choice == 'w' || choice == 'W')
    {
      choice = weight();
    }
    else if (choice == 'l' || choice == 'L')
    {
      choice = length();
    }
  }
  printf("\t-:THANK YOU FOR USING UNIT CONVERTOR:-\n\t\tBY:- AYAN KOLEY.");
  return 0;
}
// process functions
char work()
{
  printf("What you want to convert-->\n1. Temperature(t):-\n2. Weight(w):-\n3. Lenght(l):-\n4. Exit program(q):-\nEnter Code:> ");
  char choice;
  scanf(" %c", &choice);
  if (choice == 't' || choice == 'T')
  {
    return 't';
  }
  else if (choice == 'w' || choice == 'W')
  {
    return 'w';
  }
  else if (choice == 'l' || choice == 'L')
  {
    return 'l';
  }
  else if (choice == 'q' || choice == 'Q')
  {
    return 'q';
  }
  else
  {
    printf("Error: Please enter valid input.\n");
    printf("Try again (t)/ quit the program(q): ");
    char ch;
    scanf(" %d", &ch);
    if (ch == 't')
    {
      return 'a';
    }
    return 'q';
  }
  return 'q';
}
// key functions
char temperature()
{
  char form;
  printf("celcius To Fahrenheit(c) / Fahrenheit To Celcius(f)");
  scanf(" %c", &form);
  if (form == 'c' || form == 'C')
  {
    float c, f;
    printf("Enter celcius: ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("%.2f Degree celcius is equal to %.2f Degree.\n", c, f);
    printf("---------------------------------------------------\n");
  }
  else if (form == 'f' || form == 'F')
  {
    float c, f;
    printf("Enter fharenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("%.2f Degree celcius is equal to %.2f Degree.\n", f, c);
    printf("---------------------------------------------------\n");
  }
  else
  {
    printf("Error: Please enter valid input.\n");
    char w;
    printf("Try again (t)/ Return to main menu(r): ");
    scanf(" %c", &w);
    if (w == 't' || w == 'T')
    {
      return 't';
    }
    return 'a';
  }
  char ch;
  printf("Do you want to try again(y/n): ");
  scanf(" %c", &ch);
  if (ch == 'y' || ch == 'Y')
  {
    return 't';
  }
  return 'a';
}

char weight()
{
  char u1, u2;
  printf("Enter your first unit[Miligram(m)/Gram(g)/Kilogram(k)/Ton(t)]: ");
  scanf(" %c", &u1);
  if (u1 == 'm' || u1 == 'M')
  {
    printf("Enter your second unit[Gram(g)/Kilogram(kg)/Ton(t)]");
    scanf("%s", &u2);
    float v1;
    switch (u2)
    {
    case 'g':
      printf("Miligram: ");
      scanf("%f", &v1);
      printf("%.2f miligrams is equals to %.2f grams\n", v1, v1 / 1000);
      printf("---------------------------------------------------\n");
      break;
    case 'k':
      printf("Miligram: ");
      scanf("%f", &v1);
      printf("%.2f miligram is equals to %.2f kilograms\n", v1, v1 / 1000000);
      printf("---------------------------------------------------\n");
      break;
    case 't':
      printf("Miligram: ");
      scanf("%f", &v1);
      printf("%.2f miligrams is equals to %.2f tons\n", v1, v1 / 10000000000);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else if (u1 == 'g' || u1 == 'G')
  {
    printf("Enter your second unit[Miligram(m)/Kilogram(k)/Ton(t)]");
    scanf("%s", &u2);
    float v1;
    switch (u2)
    {
    case 'm':
      printf("Grams: ");
      scanf("%f", &v1);
      printf("%f Grams is equals to %f miligrams\n", v1, v1 * 1000);
      printf("---------------------------------------------------\n");
      break;
    case 'k':
      printf("Grams: ");
      scanf("%f", &v1);
      printf("%f Grams is equals to %f kilograms\n", v1, v1 / 1000);
      printf("---------------------------------------------------\n");
      break;
    case 't':
      printf("Grams: ");
      scanf("%f", &v1);
      printf("%f Grams is equals to %f tons\n", v1, v1 / 1000000);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else if (u1 == 'k' || u1 == 'K')
  {
    printf("Enter your second unit[Miligram(m)/GrKilograms/Ton(t)]");
    scanf("%s", &u2);
    float v1;
    switch (u2)
    {
    case 'm':
      printf("Kilograms: ");
      scanf("%f", &v1);
      printf("%.2f Kilograms is equals to %.2f miligrams\n", v1, v1 * 1000000);
      printf("---------------------------------------------------\n");
      break;
    case 'g':
      printf("Kilograms: ");
      scanf("%f", &v1);
      printf("%.2f Kilograms is equals to %.2f grams\n", v1, v1 * 1000);
      printf("---------------------------------------------------\n");
      break;
    case 't':
      printf("Kilograms: ");
      scanf("%f", &v1);
      printf("%.2f Kilograms is equals to %.2f tons\n", v1, v1 / 1000);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else if (u1 == 't' || u1 == 'T')
  {
    printf("Enter your second unit[Miligram(m)/GrKilograms/Ton(t)]");
    scanf("%s", &u2);
    float v1;
    switch (u2)
    {
    case 'm':
      printf("Tons: ");
      scanf("%f", &v1);
      printf("%.2f Tons is equals to %.2f miligrams\n", v1, v1 * 1000000000);
      printf("---------------------------------------------------\n");
      break;
    case 'g':
      printf("Tons: ");
      scanf("%f", &v1);
      printf("%.2f Tons is equals to %.2f grams\n", v1, v1 * 1000000);
      printf("---------------------------------------------------\n");
      break;
    case 'k':
      printf("Tons: ");
      scanf("%f", &v1);
      printf("%.2f Tons is equals to %.2f kilograms\n", v1, v1 * 1000);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else
  {
    printf("Error: Please enter valid input.\n");
    char w;
    printf("Try again (t)/ Return to main menu(r)\n: ");
    scanf(" %c", &w);
    if (w == 't' || w == 'T')
    {
      return 'w';
    }
    return 'a';
  }
  char ch;
  printf("Do you want to try again(y/n): ");
  scanf(" %c", &ch);
  if (ch == 'y' || ch == 'Y')
  {
    return 'w';
  }
  return 'a';
}

char length()
{
  char u1, u2;
  printf("please enter first unit[Milimeter(l)/Centimeter(c)/Meter(m)/Kilometer(k)/Inch(i)/Feet(f)]: ");
  scanf(" %c", &u1);
  if (u1 == 'l' || u1 == 'L')
  {
    printf("Enter second unit[Centimeter(c)/Meter(m)/Kilometer(k)/Inch(i)/Feet(f)]: ");
    scanf(" %c", &u2);
    float v1;
    switch (u2)
    {
    case 'c':
      printf("Milimeter: ");
      scanf("%f", &v1);
      printf("%.2f milimeter is equals to %.2f centimeter\n.", v1, v1 / 10);
      printf("---------------------------------------------------\n");
      break;
    case 'm':
      printf("Milimeter: ");
      scanf("%f", &v1);
      printf("%.2f milimeter is equals to %.2f meter.\n", v1, v1 / 1000);
      printf("---------------------------------------------------\n");
      break;
    case 'k':
      printf("Milimeter: ");
      scanf("%f", &v1);
      printf("%.2f milimeter is equals to %.2f kilometer.\n", v1, v1 / 1000000);
      printf("---------------------------------------------------\n");
      break;
    case 'i':
      printf("Milimeter: ");
      scanf("%f", &v1);
      printf("%.2f milimeter is equals to %.2f inch.\n", v1, v1 / 25.4);
      printf("---------------------------------------------------\n");
      break;
    case 'f':
      printf("Milimeter: ");
      scanf("%f", &v1);
      printf("%.2f milimeter is equals to %.2f feet.\n", v1, v1 / 304.8);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else if (u1 == 'c' || u1 == 'C')
  {
    printf("Enter second unit[Milimeter(l)/Meter(m)/Kilometer(k)/Inch(i)/Feet(f)]: ");
    scanf(" %c", &u2);
    float v1;
    switch (u2)
    {
    case 'c':
      printf("Centimeter: ");
      scanf("%f", &v1);
      printf("%.2f Centimeter is equals to %.2f milimeter\n.", v1, v1 * 10);
      printf("---------------------------------------------------\n");
      break;
    case 'm':
      printf("Centimeter: ");
      scanf("%f", &v1);
      printf("%.2f Centimeter is equals to %.2f meter\n.", v1, v1 / 100);
      printf("---------------------------------------------------\n");
      break;
    case 'k':
      printf("Centimeter: ");
      scanf("%f", &v1);
      printf("%.2f Centimeter is equals to %.2f kilomete\nr.", v1, v1 / 100000);
      printf("---------------------------------------------------\n");
      break;
    case 'i':
      printf("Centimeter: ");
      scanf("%f", &v1);
      printf("%.2f Centimeter is equals to %.2f inch\n.", v1, v1 * 0.393701);
      printf("---------------------------------------------------\n");
      break;
    case 'f':
      printf("Centimeter: ");
      scanf("%f", &v1);
      printf("%.2f Centimeter is equals to %.2f feet\n.", v1, v1 * 0.0328084);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else if (u1 == 'm' || u1 == 'M')
  {
    printf("Enter second unit[Milimeter(l)/Centieter(c)/Kilometer(k)/Inch(i)/Feet(f)]: ");
    scanf(" %c", &u2);
    float v1;
    switch (u2)
    {
    case 'l':
      printf("Meter: ");
      scanf("%f", &v1);
      printf("%.2f Meter is equals to %.2f milimeter\n.", v1, v1 * 1000);
      printf("---------------------------------------------------\n");
      break;
    case 'c':
      printf("Meter: ");
      scanf("%f", &v1);
      printf("%.2f Meter is equals to %.2f centimeter\n.", v1, v1 * 100);
      printf("---------------------------------------------------\n");
      break;
    case 'k':
      printf("Meter: ");
      scanf("%f", &v1);
      printf("%.2f Meter is equals to %.2f kilometer\n.", v1, v1 / 1000);
      printf("---------------------------------------------------\n");
      break;
    case 'i':
      printf("Meter: ");
      scanf("%f", &v1);
      printf("%.2f Meter is equals to %.2f inch\n.", v1, v1 * 39.3701);
      printf("---------------------------------------------------\n");
      break;
    case 'f':
      printf("Mmeter: ");
      scanf("%f", &v1);
      printf("%.2f Meter is equals to %.2f feet\n.", v1, v1 * 3.28084);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else if (u1 == 'k' || u1 == 'K')
  {
    printf("Enter second unit[Milimeter(l)/Centieter(c)/Meter(m)/Inch(i)/Feet(f)]: ");
    scanf(" %c", &u2);
    float v1;
    switch (u2)
    {
    case 'l':
      printf("Kilometer: ");
      scanf("%f", &v1);
      printf("%.2f Kilometer is equals to %.2f milimeter\n.", v1, v1 * 1000000);
      printf("---------------------------------------------------\n");
      break;
    case 'c':
      printf("Kilometer: ");
      scanf("%f", &v1);
      printf("%.2f Kilometer is equals to %.2f centimeter\n.", v1, v1 * 100000);
      printf("---------------------------------------------------\n");
      break;
    case 'm':
      printf("Kilometer: ");
      scanf("%f", &v1);
      printf("%.2f Kilometer is equals to %.2f meter\nr.", v1, v1 * 1000);
      printf("---------------------------------------------------\n");
      break;
    case 'i':
      printf("Kilometer: ");
      scanf("%f", &v1);
      printf("%.2f Kilometer is equals to %.2f inch\n.", v1, v1 * 39370.1);
      printf("---------------------------------------------------\n");
      break;
    case 'f':
      printf("Kilometer: ");
      scanf("%f", &v1);
      printf("%.2f Kilometer is equals to %.2f feet\n.", v1, v1 * 3280.84);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else if (u1 == 'i' || u1 == 'I')
  {
    printf("Enter second unit[Milimeter(l)/Centieter(c)/Meter(m)/Kilometer(k)/Feet(f)]: ");
    scanf(" %c", &u2);
    float v1;
    switch (u2)
    {
    case 'l':
      printf("Inch: ");
      scanf("%f", &v1);
      printf("%.2f Inch is equals to %.2f milimeter\n.", v1, v1 * 25.4);
      printf("---------------------------------------------------\n");
      break;
    case 'c':
      printf("Inch: ");
      scanf("%f", &v1);
      printf("%.2f Inch is equals to %.2f centimeter\n.", v1, v1 * 2.54);
      printf("---------------------------------------------------\n");
      break;
    case 'm':
      printf("Inch: ");
      scanf("%f", &v1);
      printf("%.2f Inch is equals to %.2f meter\nr.", v1, v1 * 0.0254);
      printf("---------------------------------------------------\n");
      break;
    case 'k':
      printf("Inch: ");
      scanf("%f", &v1);
      printf("%.2f Inch is equals to %.2f kilometer\n.", v1, v1 / 39370.1);
      printf("---------------------------------------------------\n");
      break;
    case 'f':
      printf("Inch: ");
      scanf("%f", &v1);
      printf("%.2f Inch is equals to %.2f feet\n.", v1, v1 / 12);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else if (u1 == 'f' || u1 == 'F')
  {
    printf("Enter second unit[Milimeter(l)/Centieter(c)/Meter(m)/Kilometer(k)/Inch(i)]: ");
    scanf(" %c", &u2);
    float v1;
    switch (u2)
    {
    case 'l':
      printf("Feet: ");
      scanf("%f", &v1);
      printf("%.2f Feet is equals to %.2f milimeter\n.", v1, v1 * 304.8);
      printf("---------------------------------------------------\n");
      break;
    case 'c':
      printf("Feet: ");
      scanf("%f", &v1);
      printf("%.2f Feet is equals to %.2f centimeter\n.", v1, v1 * 30.48);
      printf("---------------------------------------------------\n");
      break;
    case 'm':
      printf("Feet: ");
      scanf("%f", &v1);
      printf("%.2f Feet is equals to %.2f meter\nr.", v1, v1 * 0.3048);
      printf("---------------------------------------------------\n");
      break;
    case 'k':
      printf("Feet: ");
      scanf("%f", &v1);
      printf("%.2f Feet is equals to %.2f kilometer\n.", v1, v1 / 3281);
      printf("---------------------------------------------------\n");
      break;
    case 'i':
      printf("Feet: ");
      scanf("%f", &v1);
      printf("%.2f Feet is equals to %.2f feet\n.", v1, v1 * 12);
      printf("---------------------------------------------------\n");
      break;
    }
  }
  else
  {
    printf("Error: Please enter valid input.\n");
    char w;
    printf("Try again (t)/ Return to main menu(r)\n: ");
    scanf(" %c", &w);
    if (w == 't' || w == 'T')
    {
      return 'l';
    }
    return 'a';
  }
  char ch;
  printf("Do you want to try again(y/n): ");
  scanf(" %c", &ch);
  if (ch == 'y' || ch == 'Y')
  {
    return 'l';
  }
  return 'a';
}