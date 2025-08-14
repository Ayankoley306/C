// # include<stdio.h>
// creat a small function that takes two input and show their sum
// #include<stdio.h>
// int main() {
//   int num1;
//   int num2;
//   printf("Enter First number \n");
//   scanf("%d", &num1);
//   printf("Enter Second number \n");
//   scanf("%d", &num2);
//   int sum = num1 + num2;
//   printf("The Sum Is %d", sum);
//   return 0;
// }

// PRACTICE QUESTION no. 1:-
// write a program to calculate area of square.
// # include<stdio.h>
// int main () {
//   int side;
//   printf("Pleas Enter the one side value of the squar\n");
//   scanf("%d", &side);
//   int area = side * side;
//   printf("The area of the square %d cm", area);
//   return 0;
// }

// PRACTICE QUESTION no. 2:-
// write a program to calculate area of a circle.
// # include<stdio.h>
// int main() {
//   float radius;
//   printf("Pleas enter The Radius Of The Circle \n");
//   scanf("%f", &radius);
//   float pi = 3.14;
//   float area = pi * (radius * radius);
//   printf("The Area Of The Circle Is %f", area);
//   return 0;
// }

// PRACTICE QUESTION no. 3:-
// write a program to calculate perimeter of rectangle
// # include<stdio.h>
// int main(){
//   float lenght;
//   float width;
//   printf("Enter lenght of The Rectangle \n");
//   scanf("%f", &lenght);
//   printf("Enter width of The Rectangle \n");
//   scanf("%f", &width);
//   printf("Area Of The rectangle Is %f", lenght * width);
//   return 0;
// };

// PRACTICE QUESTION no. 4:-
// Take a number from user and output its cube
// # include<stdio.h>
// int main() {
//   float n;
//   printf("Enter Number \n");
//   scanf("%f", &n);
//   float cube = n * (n * n);
//   printf("Cube Of The Number Is %f", cube);
//   return 0;
// }

// PRACTICE QUESTION no. 5:-
// write a program if a number is devisible by 3 or not.
// # include<stdio.h>
// int main() {
//   printf("Enter a number \n");
//   int num;
//   scanf("%d", &num);
//   int output = num % 3 == 0;
//   printf("this number is %d", output);
//   return 0;
// }

// PRACTICE QUESTION no. 6:-
// write a program to chech if a number is odd or even.
// # include<stdio.h>
// int main(){
//   printf("Enter a number \n");
//   int num;
//   scanf("%d", &num);
//   int output = num % 2 == 0;
//   printf("this number is %d", output);
//   return 0;
// }

// PRACTICE QUESTION no. 7:-
// write a program to print 1(true) or 0(false) for following statement:
// a. if it's sunday & it's snowing -> true
// b. if it's monday or raining -> true
// c. if a number is greater then9 & less then 100 ->
// A.
//  # include<stdio.h>
//  int main(){
//    int isSunday = 1;
//    int isSnowing = 1;
//    printf("Is it sunday and raining %d", isSunday == 1 && isSnowing == 1);
//    return 0;
//  }
// B.
// # include<stdio.h>
// int main(){
//   int isMonday = 1;
//   int israining = 0;
//   printf("Is it sunday and raining %d", isMonday == 1 || israining == 1);
//   return 0;
// }
// C.
// # include<stdio.h>
// int main(){
//   int num;
//   printf("Enter a number \n");
//   scanf("%d", &num);
//   printf("The Number Is %d", num > 9 && num < 100);
//   return 0;
// }

// HOMEWORK SET
//  A. WRITE A PROGRAM TO PRINT THE AVERAGE OF 3 NUMBERS.
//  # include<stdio.h>
//  int main(){
//    int num1, num2, num3;
//    printf("Enter 3 Numbers \n");
//    scanf("%d", &num1);
//    scanf("%d", &num2);
//    scanf("%d", &num3);
//    printf("The Average Of Those 3 Number Is %d", (num1 + num2  + num3)/3);
//    return 0;
//  }
// B. write a program to check if given character is digit or not.
//  # include<stdio.h>
//  int main(){
//    int input;
//    printf("enter your input \n");
//    scanf("%d", &input);
//    printf("your input is %d", input == (float)input && input != (char)input);
//    return 0;
//  }

// PRACTICE QUESTION no. 8:-
// write a program to check if students are faild or passed.
// marks>30 is pass
// maeks <= 30 is fail
// # include<stdio.h>
// int main(){
//   int marks;
//   printf("Enter Your Marks \n");
//   scanf("%d", &marks);
//   if (marks > 30 && marks <=100){
//     printf("You passed");
//   } else if (marks <= 30 && marks > 0) {
//     printf("You Failed");
//   } else {
//     printf("unidentified");
//   }
//   return 0;
// }

// PRACTICE QUESTION no. 9:-
// write a program to give grade to a student
// marks<30 is c
// 30<=marks>70 is b
// 70<=marks<90 is a
// 90<=marks<=100 is a+
// # include<stdio.h>
// int main(){
//   int marks;
//   printf("Enter Your Marks \n");
//   scanf("%d", &marks);
//   if(marks<=100 && marks >= 90){
//     printf("Grade : A+");
//   } else if (marks < 90 && marks >=70) {
//     printf("Grade : A");
//   }else if (marks < 70 && marks >=30) {
//     printf("Grade : B");
//   } else if (marks <30 && marks>0){
//     printf ("Grade : C");
//   } else {
//     printf("undefined");
//   };
//   return 0;
// }

// PRACTICE QUESTION no. 10:-
// write a program to find if a entered by user is upper csae or not.
// int main() {
//   char ch;
//   printf("Enter a Character \n");
//   scanf("%c", &ch);
//   if(ch >= 'A' && ch<= 'Z'){
//     printf("%c is a UPPER case", ch);
//   } else if (ch>='a' && ch<='z') {
//     printf("%c is a Lower case", ch);
//   } else {
//     printf("%c is Not a english charactor", ch);
//   }
//   return 0;
// }

// PRACTICE QUESTION no. 11:-
// write a program to check if a given number is Natural number or not.(natural number start from 1)
// int main (){
//   int num;
//   printf("Enter a number \n");
//   scanf("%d", &num);
//   if (num > 0) {
//     printf("%d is a natural number", num);
//   };
//   return 0;
// }

// PRACTICE QUESTION no. 12:-
// print the number from 0 to 10
// int main (){
//   for(int i = 0; i<=10; i= i+1){
//     printf("%d \n", i);
//   }
//   return 0;
// }

// PRACTICE QUESTION no. 13:-
// print the number from 0 to n, iif n is given by user:
// int main(){
//   int n;
//   printf("enter your number \n");
//   scanf("%d", &n);
//   for (int i = 0; i<= n; i++) {
//     printf("%d \n", i);
//   }
// }

// PRACTICE QUESTION no. 14:-
//
// # include<stdio.h>
// int main(){
//   int n;
//   int o = 0;
//   printf("Enter how many natural number you want \n");
//   scanf("%d", &n);
//   for(int i = 1; i <= n; i++){
//     o = o+i;
//   };
//   printf("%d", o);
//   return 0;
// }

// PRACTICE QUESTION no. 15:-
// print the first n natural numbers in reverse.
//  #include<stdio.h>
//  int main(){
//   int n;
//   printf("Enter how many natural number you want :");
//   scanf("%d", &n);
//   for(int i = n; i >= 1; i--){
//      printf("%d \n", i);
//   }
//   return 0;
//  }

// PRACTICE QUESTION no. 16:-
// print the table if a number input by the user.
// # include<stdio.h>
// int main(){
//   int n;
//   printf("Enter the table :");
//   scanf("%d", &n);
//   for(int i =1; i<=10; i++){
//     printf("%d x %d = %d \n", n, i, n*i);
//   };
// }

// PRACTICE QUESTION no. 17:-
// keep taking numbers as input from user until enter an odd number.
// #include<stdio.h>
// int main(){
//   int n;
//   for(int i=1; i > 1; i++){
//     printf("enter numbers : ");
//     scanf("%d", &n);
//     if(n % 2 ==1){
//       printf("%d Is odd number", n);
//       break;
//     }
//     printf("this is an even number");
//   }
// }

// PRACTICE QUESTION no. 18:-
// keep taking numbers as input from user until user enter a number is multiple of 7.
// #include<stdio.h>
// int main(){
//   int n;
//   do{
//     printf("enter numbers : ");
//     scanf("%d", &n);
//     if(n % 7 ==0 && n>=7){
//       printf("%d is multiple of 7 \n", n);
//       break;
//     }
//     printf("%d is not multiple by 7 \n", n);
//   }while(1);
// }

// PRACTICE QUESTION no.19: -
// PRINT ALL FROM 1 TO 10 EXCEPT 6.
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 10; i++)
//   {
//     if (i == 6)
//     {
//       continue;
//     };
//     printf("%d \n", i);
//   }
// }

// PRACTICE QUESTION no.20 : -
// PRINT ALL THE ODD NUMBER FROM 5 TO 50.
// #include <stdio.h>
// int main()
// {
//   for (int i = 5; i <= 50; i++)
//   {
//     if (i%2 == 0)
//     {
//       continue;
//     };
//     printf("%d \n", i);
//   }
// }
// 2 way
// #include <stdio.h>
// int main()
// {
//   for (int i = 5; i <= 50; i++)
//   {
//     if (i%2 == 1)
//     {
//       printf("%d \n", i);
//     };
//   }
// }

// PRACTICE QUESTION no.21 : -
// print a factorial of a number.
// #include <stdio.h>
// int main()
// {
//   int output = 1;
//   int n;
//   printf("enter a number : ");
//   scanf("%d", &n);
//   for (int i = 1; i <= n; i++)
//     {
//       output*=i;
//     };
//   printf("%d", output);
//   return 0;
// }

// PRACTICE QUESTION no. 22:-
// print the table if a number input by the user.
// # include<stdio.h>
// int main(){
//   int n;
//   printf("Enter the table :");
//   scanf("%d", &n);
//   for(int i =10; i>=1; i--){
//     printf("%d x %d = %d \n", n, i, n*i);
//   };
// }

// PRACTICE QUESTION no. 23:-
// calculat the sum of all number between 5 to 50.
// # include<stdio.h>
// int main(){
//   int o = 0;
//     for (int i = 5; i<=50; i++)
//   {
//     o+=i;
//   }
//   printf("%d",o);
// }

// PRACTICE QUESTION no. 24:-
// print this pattern
// *****
// *****
// *****
// *****
// #include<stdio.h>
// int main () {
//   char ch = '*';
//   int n;
//   printf("how many lines you want : ");
//   scanf("%d", &n);
//   for (int i = 1; i<=n; i++) {
//     for (int i = 1; i<=n; i++) {
//     printf("%c", ch);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// PRACTICE QUESTION no. 25:-
// write a program if a numer is prime or not.
// #include<stdio.h>
// int main(){
//   int n;
//   printf("enter a number : ");
//   scanf("%d", &n);
//   for (int i = 2; i <= n; i++)
//   {
//     if(n%i== 0){
//       if(i!=n){
//         printf("%d is not a prime number", n);
//         return 0;
//       } else{
//         printf("%d is a prime number", n);
//       }
//     }
//   }
// }

// PRACTICE QUESTION no. 26:-
// write program to print prime numbers in range.
// #include<stdio.h>
// int main(){
//   int n;
//   printf("enter a number : ");
//   scanf("%d", &n);
//   for (int i = 2; i <= n; i++)
//   {
//     for (int j = 2; j <=n; j++)
//     {
//       if(i%j== 0){
//         if(i!=j)
//           break;
//         }else{
//           printf("%d \n", i);
//         }
//       };
//     }
//     return 0;
//   }

// PRACTICE QUESTION no. 27:-
// write two function - one to print "Hello" & second to print "goodbye".
// #include <stdio.h>
// void printhello();
// void printgoodbye();
// int main()
// {
//   printhello();
//   printgoodbye();
//   return 0;
// }
// void printhello()
// {
//   printf("Hello guys \n");
// }
// void printgoodbye()
// {
//   printf("Good bye guys \n");
// }

// PRACTICE QUESTION no. 28:-
// write a function that prints Namaste if user is an indian & bonjour if the user is frence.
// #include <stdio.h>
// void namaste();
// void bonjour();
// int main()
// {
//   char nationality;
//   printf("Where are you from(i for India/f for Franch):");
//   scanf(" %c", &nationality);
//   if (nationality == 'i')
//   {
//     namaste();
//   }
//   else if (nationality == 'f')
//   {
//     bonjour();
//   }
//   return 0;
// }
// void namaste()
// {
//   printf("Namaste User!");
// }
// void bonjour()
// {
//   printf("Bonjour User!");
// }

// PRACTICE QUESTION no. 29:-
// use library function to calculate the aquare of a number given by the user
// #include <stdio.h>
// #include <math.h>
// void square(int num);
// int main()
// {
//   int num;
//   printf("Enter number: ");
//   scanf(" %d", &num);
//   square(num);
//   return 0;
// }
// void square(int num)
// {
//   printf("Squqre if the number is %f", pow(num, 2));
// }

// PRACTICE QUESTION no. 30:-
// write functions to calculate area of a square, a circle and a rectangle.
// #include <stdio.h>
// float square();
// float circle();
// float retangle();
// int main()
// {
//   char format;
//   printf("Enter whose area you want(s for square/c for circle/r for rectangle): ");
//   scanf(" %c", &format);
//   if (format == 's')
//   {
//     square();
//   }
//   else if (format == 'c')
//   {
//     circle();
//   }
//   else if (format == 'r')
//   {
//     retangle();
//   }
//   else
//   {
//     printf("undefind format.");
//   }
// }
// float square()
// {
//   int height;
//   printf("Please enter square height: ");
//   scanf("%d", &height);
//   printf("The area of the square is %d", height * 4);
// }
// float circle()
// {
//   int radius;
//   float pi = 3.14;
//   printf("Please enter circle radius: ");
//   scanf("%d", &radius);
//   printf("The area of the circle is %f", pi * radius);
// }
// float retangle()
// {
//   int height;
//   int width;
//   printf("Please enter square height and width:-\nheight: ");
//   scanf("%d", &height);
//   printf("width: ");
//   scanf(" %d", &width);
//   printf("The area of the square is %d", height * width);
// }

// PRACTICE QUESTION no. 31:-
// print "hello world" 5 times with recursion.
// #include <stdio.h>
// void printhw(int count);
// int main()
// {
//   int count = 5;
//   printhw(count);
//   return 0;
// }
// void printhw(int count)
// {
//   if (count == 0)
//   {
//     return;
//   }
//   printf("hello world\n");
//   printhw(count - 1);
// };

// PRACTICE QUESTION no. 32:-
// print "hello world" 5 times with recursion.
// #include <stdio.h>
// void sum(float n, float o);
// int main()
// {
//   float n, o;
//   printf("enter n: ");
//   scanf("%f", &n);
//   sum(n, o);
//   return 0;
// }
// void sum(float n, float o)
// {
//   if (n == 0)
//   {
//     printf("sum of the natural numbers is %f", o);
//     return;
//   }
//   o = o + n;
//   sum(n - 1, o);
// };

// PRACTICE QUESTION no. 33:-
// #include <stdio.h>
// int factorial(int n);
// int main()
// {
//   int n;
//   printf("enter n: ");
//   scanf("%d", &n);
//   printf("factorian of %d is %d", n, factorial(n));
//   return 0;
// }
// int factorial(int n)
// {
//   if (n == 1)
//   {
//     return 1;
//   }
//   int factorialNum1 = factorial(n - 1);
//   int factirialN = factorialNum1 * n;
// };

// PRACTICE QUESTION no. 34:-
// write a function to convert celsius to fahrenheit.
// #include <stdio.h>
// void cTof(float c);
// int main()
// {
//   float c;
//   printf("enter celsius value: ");
//   scanf("%f", &c);
//   cTof(c);
//   return 0;
// }
// void cTof(float c)
// {
//   float f;
//   f = (c * 9 / 5) + 32;
//   printf("%f celsius is equal to %f", c, f);
// }

// PRACTICE QUESTION no. 35:-
// write a function to calculate percentage of a student from marks science, math, sanskrit.
// #include <stdio.h>
// int persentage(int marks);
// float totalper(int s, int m, int sa);
// int main()
// {
//   int science, math, sanskrit;
//   printf("Pleas enter your marks:-\nScience: ");
//   scanf("%d", &science);
//   printf("Math: ");
//   scanf("%d", &math);
//   printf("Sanskrit: ");
//   scanf("%d", &sanskrit);
//   printf("individualy\n");
//   printf("Science: %d persent \n", persentage(science));
//   printf("Math: %d persent \n", persentage(math));
//   printf("Sanskrit: %d persent \n", persentage(sanskrit));
//   printf("in total\n");
//   totalper(science, math, sanskrit);
// }
// int persentage(int marks)
// {
//   marks / 100 * 100;
// };
// float totalper(int s, int m, int sa)
// {
//   float total = s + m + sa;
//   printf("%f persent", total * 100 / 300);
// };

// PRACTICE QUESTION no. 36:-
// write a function to find sum of digits of a number.
// #include <stdio.h>
// int sumofdigits(int num);
// int main()
// {
//   int number;
//   printf("enter a number to see it's sum of digits: ");
//   scanf("%d", &number);
//   printf("%d", number % 10);
//   int result = sumofdigits(number);
//   printf("sum of digits is %d", result);
// }
// int sumofdigits(int num)
// {
//   int sum = 0;
//   while (num != 0)
//   {
//     sum += num % 10;
//     num /= 10;
//   }
//   return sum;
// }

// PRACTICE QUESTION no. 37:-
// write a function to find square root of a number.
// #include <stdio.h>
// int squareroot(int n);
// int main()
// {
//   int n;
//   printf("enter number: ");
//   scanf("%d", &n);
//   squareroot(n);
// }
// int squareroot(int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     if (i * i == n)
//     {
//       printf("The squareroot of %d is %d", n, i);
//       break;
//     }
//   }
//   printf("The square root of %d is not a intiger.", n);
// }

// PRACTICE QUESTION no. 38:-
// write a function to print "Hot" or "cold" depend on the temperature user enters.
// #include <stdio.h>
// void temperature(float temp);
// int main()
// {
//   float temp;
//   printf("Enter your room temperature(in celcus): ");
//   scanf(" %f", &temp);
//   temperature(temp);
// }
// void temperature(float temp)
// {
//   if (temp >= 24)
//   {
//     printf("hot");
//   }
//   else
//   {
//     printf("cold");
//   }
// }

// PRACTICE QUESTION no. 39:-
// write a function to creat a pow function.
// #include <stdio.h>
// int power(int n, int p);
// int main()
// {
//   int n, p, result;
//   printf("pleas enter number: \n");
//   scanf("%d", &n);
//   printf("To the power");
//   scanf("%d", &p);
//   power(n, p);
// }
// int power(int n, int p)
// {
//   int result = 1;
//   for (int i = 1; i <= p; i++)
//   {
//     result *= n;
//   }
//   printf("%d", result);
// }

// PRACTICE QUESTION no. 40:-
// write a program to check if a given number is Armstrong number or not.##### ####### ####### ###### ######### ######### ####### ####### #########
// int main()
// {
// }

// PRACTICE QUESTION no. 41:-
// print the value of "i" from its pointer to pointer .
// #include <stdio.h>
// int main()
// {
//   int i = 7;
//   int *ptr = &i;
//   int **pptr = &ptr;
//   printf("%c", **pptr);
// }

// PRACTICE QUESTION no. 42:-
// awap two numbers a &b with pointer.
// #include <stdio.h>
// int swap(int *a, int *b);
// int main()
// {
//   int a, b;
//   printf("please enter two numbers : \n ");
//   scanf("%d %d", &a, &b);
//   printf("before swap a = %d b = %d \n", a, b);
//   swap(&a, &b);
//   printf("after swap a = %d b = %d", a, b);
// }
// int swap(int *a, int *b)
// {
//   int temp;
//   temp = *a;
//   *a = *b;
//   *b = temp;
// }

// PRACTICE QUESTION no. 43:-
// write a function to calculate the sum, product & average of 2 numbers.
// print that acetage in main funvtion.
// #include <stdio.h>
// float sum(float *a, float *b, float *result);
// float product(float *a, float *b, float *result);
// float average(float *a, float *b, float *result);
// int main()
// {
//   float a, b, result;
//   printf("Enter 2 numbers : \n");
//   scanf("%f %f", &a, &b);
//   sum(&a, &b, &result);
//   printf("The sum is %f \n", result);
//   product(&a, &b, &result);
//   printf("The product is %f \n", result);
//   average(&a, &b, &result);
//   printf("The average is %f \n", result);
// }
// float sum(float *a, float *b, float *result)
// {
//   *result = *a + *b;
// };
// float product(float *a, float *b, float *result)
// {
//   *result = (*a) * (*b);
// }
// float average(float *a, float *b, float *result)
// {
//   *result = (*a + *b) / 2;
// };

// PRACTICE QUESTION no. 44:-
// write a program in c to find the maximum number between two numbers using a pointer.
// #include <stdio.h>
// int bigger(int *a, int *b);
// int main()
// {
//   int n1, n2;
//   printf("Enter two numbers : \n");
//   scanf("%d %d", &n1, &n2);
//   bigger(&n1, &n2);
//   return 0;
// }
// int bigger(int *a, int *b)
// {
//   if (*a > *b)
//   {
//     printf("%d is bigger then %d", *a, *b);
//   }
//   else
//   {
//     printf("%d is bigger then %d", *b, *a);
//   }
// }

// PRACTICE QUESTION no. 45:-
// write a program in c to print all the letters in english alphabet using a pointer.
// #include <stdio.h>
// #include <stdio.h>
// int main()
// {
//   char ch = 'A';
//   for (int i = 0; i <= 25; i++)
//   {
//     printf("%c ", ch + i);
//   }
// }

// PRACTICE QUESTION no. 46:-
// write a progeam in c to print the elements of an array in reverse order.
// #include <stdio.h>
// int main()
// {
//   int marks[5] = {20, 30, 40, 50, 60};
//   for (int i = 5 - 1; i >= 0; i--)
//   {
//     printf("%d\t", marks[i]);
//   }
//   return 0;
// }

// PRACTICE QUESTION no. 47:-
// write a program to enter price of 3 items & print their final cost with gst.
// #include <stdio.h>
// int main()
// {
//   float item[3];
//   printf("Please enter item prices: \n");
//   scanf("%f", &item[0]);
//   scanf("%f", &item[1]);
//   scanf("%f", &item[2]);
//   printf("Final price of item 1 with GST is %f\n", item[0] + (0.18 * item[0]));
//   printf("Final price of item 2 with GST is %f\n", item[1] + (0.18 * item[1]));
//   printf("Final price of item 2 with GST is %f\n", item[2] + (0.18 * item[2]));
//   return 0;
// }

// PRACTICE QUESTION no. 48:-
// write a function to print marks of two students.
// #include <stdio.h>
// int main()
// {
//   int marks[2][3] = {
//       {95, 54, 45},
//       {48, 57, 48}};
//   int n = 2, j = 3;
//   for (int i = 0; i < n; i++)
//   {
//     printf("studenr%d :", i + 1);
//     for (int p = 0; p < j; p++)
//     {
//       printf("%d\t", marks[i][p]);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// PRACTICE QUESTION no. 49:-
// write a function to count the numberof odd numbers in an array.
// #include <stdio.h>
// int main()
// {
//   int num[5];
//   printf("Enter numbers :\n");
//   for (int i = 0; i <= 5 - 1; i++)
//   {
//     scanf("%d", &num[i]);
//   }
//   printf("odd numbers are: ");
//   for (int i = 0; i <= 5 - 1; i++)
//   {
//     if (num[i] % 2 == 1)
//     {
//       printf("%d\t", num[i]);
//     }
//   }
// }

// PRACTICE QUESTION no. 50:-
// reverse a array.
// #include <stdio.h>
// void reverse(int arr[], int n);
// int main()
// {
//   int arr[5] = {1, 2, 3, 4, 5};
//   reverse(arr, 5);
//   for (int i = 0; i <= 5 - 1; i++)
//   {
//     printf("%d \n", arr[i]);
//   }
//   return 0;
// }
// void reverse(int arr[], int n)
// {
//   int fvalue, svalue;
//   for (int i = 0; i < n / 2; i++)
//   {
//     fvalue = arr[i];
//     svalue = arr[n - i - 1];
//     arr[n - i - 1] = fvalue;
//     arr[i] = svalue;
//   }
// };

// PRACTICE QUESTION no. 43:-
// write a function to print n tiems of the fibonacci sequence.
// #include <stdio.h>
// void fibo(int arr[], int n);
// int main()
// {
//   int num;
//   printf("How many fabonacci numbar you want: ");
//   scanf("%d", &num);
//   int arr[num];
//   arr[0] = 0;
//   arr[1] = 1;
//   fibo(arr, num);
//   for (int i = 0; i <= num - 1; i++)
//   {
//     printf("%d\t", arr[i]);
//   }
// }
// void fibo(int arr[], int n)
// {
//   for (int i = 2; i <= n - 1; i++)
//   {
//     arr[i] = arr[i - 1] + arr[i - 2];
//   }
// }

// PRACTICE QUESTION no. 51:-
// creat a 2D array,shorting the table of 2 & 3.
// #include <stdio.h>
// void creatTable(int arr[][10], int r, int c, int num);
// int main()
// {
//   int arr[2][10];
//   creatTable(arr, 0, 10, 2);
//   creatTable(arr, 1, 10, 3);
//   for (int i = 1; i <= 10; i++)
//   {
//     printf("%d\t", arr[0][i]);
//   }
// }
// void creatTable(int arr[][10], int r, int c, int num)
// {
//   for (int i = 1; i <= c; i++)
//   {
//     arr[r][i] = num * i;
//   }
// };

// PRACTICE QUESTION no. 52:-
// in an array of  number, find how many times does a number'x' occurs.
// #include <stdio.h>
// void findDup(int arr[], int idx, int num);
// int main()
// {
//   int num = 7;
//   int idx;
//   int arr[100] = {31, 48, 41, 77, 90, 29, 59, 88, 51, 63, 18, 80, 87, 19, 13, 87, 52, 52, 8, 47, 89, 68, 14, 87, 36, 65, 6, 26, 10, 17, 73, 10, 55, 93, 14, 3, 93, 40, 8, 46, 81, 86, 85, 30, 48, 55, 39, 14, 47, 78, 26, 3, 31, 32, 96, 32, 45, 65, 42, 78, 89, 50, 53, 63, 71, 23, 23, 22, 41, 68, 15, 14, 94, 51, 68, 42, 45, 27, 5, 60, 40, 25, 45, 31, 79, 72, 74, 17, 17, 86, 61, 58, 27, 83, 63, 60, 89, 4, 58};
//   findDup(arr, 100, num);
//   return 0;
// }
// void findDup(int arr[], int idx, int num)
// {
//   int times = 0;
//   for (int i = 0; i <= idx; i++)
//   {
//     if (arr[i] == num)
//     {
//       times++;
//     }
//   }
//   printf("%d number has %d times", num, times);
// }

// PRACTICE QUESTION no. 53:-
// write a program to print the largest number in an array.
// #include <stdio.h>
// int main()
// {
//   int size;
//   printf("Enter how many numbers you have: ");
//   scanf("%d", &size);
//   int arr[size];
//   printf("enter the numbers-->\n");
//   for (int i = 0; i < size; i++)
//   {
//     scanf(" %d", &arr[i]);
//   }
//   int max;
//   max = arr[0];
//   for (int j = 1; j < size; j++)
//   {
//     if (arr[j] > max)
//     {
//       max = arr[j];
//     }
//   }
//   printf("%d", max);
// }

// PRACTICE QUESTION no. 54:-
// write a program to insert an element at the end of an array.
// #include <stdio.h>
// int main()
// {
//   int num;
//   int numarr[10] = {52, 45, 15, 25, 35};
//   printf("enter the number you want to add: ");
//   int length = 5;
//   scanf("%d", &num);
//   numarr[length] = num;
//   for (int i = 0; i <= length; i++)
//   {
//     printf("%d\t", numarr[i]);
//   }
//   return 0;
// }

// PRACTICE QUESTION no. 55:
// creat a steing first name & last name to store details of user & print all the characters using loop.
// #include <stdio.h>
// void printStr(char arr[]);
// int main()
// {
//   char firstName[] = "ayan";
//   char lastName[] = "koley";
//   printStr(firstName);
//   printStr(lastName);
//   return 0;
// }
// void printStr(char arr[])
// {
//   for (int i = 0; arr[i] != '\0'; i++)
//   {
//     printf("%c", arr[i]);
//   };
//   printf(" ");
// }

// PRACTICE QUESTION no. 56:-
// Ask the user to enter their full name and print them back.
// #include <stdio.h>
// int main()
// {
//   char name[40];
//   printf("Enter your full name :");
//   fgets(name, 40, stdin);
//   printf("Your Full Name Is %s", name);
//   return 0;
// }

// PRACTICE QUESTION no. 57:-
// make a program their inputs user"s name & print its lenght.
// #include <stdio.h>
// void countlenght(char name[]);
// int main()
// {
//   char name[100];
//   fgets(name, 100, stdin);
//   countlenght(name);
// }
// void countlenght(char name[])
// {
//   int count = 0;
//   for (int i = 0; name[i + 1] != '\0'; i++)
//   {
//     printf("%s", name);
//     count++;
//   }
//   printf("%d", count);
// };

// PRACTICE QUESTION no. 58:-
// take a string input from the user using %c.
// #include <stdio.h>
// int main()
// {
//   char arr[10000];
//   char ch;
//   int i = 0;
//   while (ch != '\n')
//   {
//     scanf("%c", &ch);
//     arr[i] = ch;
//     i++;
//   };
//   arr[i - 1] = '\0';
//   printf("%s", arr);
// }

// PRACTICE QUESTION no. 59:-
// find the salted form of a password entered by user if the salt is "123" & addat the end;
// #include <stdio.h>
// #include <string.h>
// void addsalt(char str[], char s[]);
// int main()
// {
//   char password[10];
//   char salt[4] = "123";
//   printf("Please enter your password: ");
//   scanf("%s", password);
//   addsalt(password, salt);
//   printf("%s", password);
// }
// void addsalt(char str[], char s[])
// {
//   strcat(str, s);
// };

// PRACTICE QUESTION no. 60:-
// write a function named slice, which takes a string &returns a sliced string from index n to m;
// #include <stdio.h>
// void slice(char arr[], int n, int m);
// int main()
// {
//   char str[100];
//   int n, m;
//   printf("Enter a string: ");
//   fgets(str, 100, stdin);
//   printf("slice string from ");
//   scanf("%d", &n);
//   printf(" to ");
//   scanf("%d", &m);
//   slice(str, n, m);
// }
// void slice(char arr[], int n, int m)
// {
//   for (int i = n; i <= m; i++)
//   {
//     printf("%c", arr[i]);
//   }
// };

// PRACTICE QUESTION no. 61:-
// write a function to count the occurrence of vowels in a string;
// #include <stdio.h>
// #include <string.h>
// void findvowel(char str[]);
// int main()
// {
//   char str[100];
//   char ch;
//   printf("Enter a string: ");
//   fgets(str, 100, stdin);
//   findvowel(str);
// }
// void findvowel(char str[])
// {
//   int count = 0;
//   for (int i = 0; i <= strlen(str); i++)
//   {
//     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//     {
//       count++;
//     }
//   }
//   printf("Their is %d vowels in this string", count);
// }

// PRACTICE QUESTION no. 62:-
// check if the given character is present in a string or not.
// #include <stdio.h>
// #include <string.h>
// void findch(char str[], char ch);
// int main()
// {
//   char str[100];
//   char ch;
//   printf("Enter a string: ");
//   fgets(str, 100, stdin);
//   printf("enter which character you want to find: ");
//   scanf("%c", &ch);
//   findch(str, ch);
// }
// void findch(char str[], char ch)
// {
//   for (int i = 0; i <= strlen(str); i++)
//   {
//     if (str[i] == ch)
//     {
//       printf("Yes, %c character is present at %d.", ch, i + 1);
//       return;
//     }
//   }
//   printf("No, %c character is not present in this string.", ch);
// };

// PRACTICE QUESTION no. 63:-
// write a program to convert all lower vowels to uppercase in a string.
// #include <stdio.h>
// #include <string.h>
// void findvowel(char str[]);
// int main()
// {
//   char str[100];
//   char ch;
//   printf("Enter a string: ");
//   fgets(str, 100, stdin);
//   findvowel(str);
//   printf("%s", str);
// }
// void findvowel(char str[])
// {
//   int count = 0;
//   for (int i = 0; i <= strlen(str); i++)
//   {
//     if (str[i] == 'a')
//     {
//       str[i] = 'A';
//     }
//     else if (str[i] == 'e')
//     {
//       str[i] = 'E';
//     }
//     else if (str[i] == 'i')
//     {
//       str[i] = 'I';
//     }
//     else if (str[i] == 'o')
//     {
//       str[i] = 'O';
//     }
//     else if (str[i] == 'u')
//     {
//       str[i] = 'U';
//     };
//   }
// }

// PRACTICE QUESTION no. 64:-
// write a program to print the highest frequency character in a string.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char str[50];
//   printf("enter a string: ");
//   fgets(str, 50, stdin);
//   int max = 0;
//   char ch;
//   for (int i = 0; i < strlen(str); i++)
//   {
//     int m = 0;
//     for (int j = 0; j < strlen(str); j++)
//     {
//       if (str[i] == str[j])
//       {
//         m++;
//       }
//     }
//     if (m > max)
//     {
//       max = m;
//       ch = str[i];
//     }
//   }
//   printf(" %c", ch);
// }

// PRACTICE QUESTION no. 65:-
// write a program to replace lowercase letter with uppercase & vice versa in a steing.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char str[50];
//   printf("enter a string-->");
//   fgets(str, 50, stdin);
//   for (int i = 0; i <= strlen(str); i++)
//   {
//     if (str[i] >= 'a' && str[i] <= 'z')
//     {
//       str[i] = str[i] - 32;
//     }
//   }
//   printf("%s", str);
// }

// PRACTICE QUESTION no. 66:-
// write a program to remove blank spaces in a string.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char str[50];
//   char newstr[50];
//   int n = 0;
//   printf("Enter a string to remove blanks-->\n");
//   fgets(str, 50, stdin);
//   for (int i = 0; i <= strlen(str); i++)
//   {
//     if (str[i] != ' ')
//     {
//       newstr[n] = str[i];
//       n++;
//     }
//   }
//   for (int i = 0; i <= strlen(newstr); i++)
//   {
//     printf("%c", newstr[i]);
//   }
// }

// PRACTICE QUESTION no. 67:-
// write a program to store the data of 3 students.
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//   char name[100];
//   int roll;
//   float persentage;
// };
// int main()
// {
//   // student 1
//   struct student s1;
//   strcpy(s1.name, "Ayan koley");
//   s1.roll = 20;
//   s1.persentage = 466 * 100 / 500;
//   printf("%s\t", s1.name);
//   printf("%d\t", s1.roll);
//   printf("%f\n", s1.persentage);
//   // student 2
//   struct student s2;
//   strcpy(s2.name, "Krishnendu das");
//   s2.roll = 26;
//   s2.persentage = 455 * 100 / 500;
//   printf("%s\t", s2.name);
//   printf("%d\t", s2.roll);
//   printf("%f\n", s2.persentage);
//   // student 3
//   struct student s3;
//   strcpy(s3.name, "Soumik das");
//   s3.roll = 40;
//   s3.persentage = 419 * 100 / 500;
//   printf("%s\t", s3.name);
//   printf("%d\t", s3.roll);
//   printf("%f\n", s3.persentage);
// }

// PRACTICE QUESTION no. 68:-
// enter address(villagename, police station name, district, state, pin code) of 5 people.
// #include <stdio.h>
// #include <string.h>
// typedef struct address
// {
//   char name[25];
//   char village[50];
//   char policeStation[50];
//   char district[50];
//   char state[50];
//   int pinCode;
// } add;
// void getAdd(add p[]);
// void printAdd(add p);
// int main()
// {
//   add p1 = {"Ayan koley", "Balarambati", "singur", "Hooghly", "west bengal", 712409};
//   add p2 = {"Krishnendu Das", "Shiborambati", "singur", "Hooghly", "west bengal", 712409};
//   add p3 = {"Bishnu Deb Shwe", "Gopalnagar", "singur", "Hooghly", "west bengal", 712411};
//   add p4 = {"Mousom Das", "Shiborambati", "singur", "Hooghly", "west bengal", 712409};
//   add p5 = {"Soumik Das", "Basubati", "singur", "Hooghly", "west bengal", 712409};
//   printAdd(p1);
//   printAdd(p2);
//   printAdd(p3);
//   printAdd(p4);
//   printAdd(p5);
// }
// void printAdd(add p)
// {
//   printf("Name: %s\n", p.name);
//   printf("Village: %s\n", p.village);
//   printf("Police Station: %s\n", p.policeStation);
//   printf("District: %s\n", p.district);
//   printf("Stste: %s\n", p.state);
//   printf("Pincode: %d\n", p.pinCode);
// };

// PRACTICE QUESTION no. 69:-
// creta a structure to store vectors. Then make a function to return sum of 2 vectors.
// #include <stdio.h>
// struct vector
// {
//   int x;
//   int y;
// };
// void sumVector(struct vector a, struct vector b, struct vector s);
// int main()
// {
//   struct vector v1;
//   struct vector v2;
//   struct vector sum;
//   printf("enter value of vectors--\n");
//   printf("first vector:-\nx = ");
//   scanf("%d", &v1.x);
//   printf("y = ");
//   scanf("%d", &v1.y);
//   printf("second vector:-\nx = ");
//   scanf("%d", &v2.x);
//   printf("y = ");
//   scanf("%d", &v2.y);
//   sumVector(v1, v2, sum);
//   return 0;
// }
// void sumVector(struct vector a, struct vector b, struct vector s)
// {
//   s.x = a.x + b.x;
//   s.y = a.y + b.y;
//   printf("sum of the two vector is \n x = %d , y= %d", s.x, s.y);
// }

// PRACTICE QUESTION no. 70:-### ###### ### ### ### ### #### ### ### ### ## ## ##### ### ### ### ## ### ## ## ### ## #
// creat a structure to store complex number(use arrow operator).
// #include <stdio.h>
// struct complex
// {
//   int cnum;
//   char x = 'x';
// };
// void complexNum(struct complex a);
// int main()
// {
//   struct complex number1;
//   printf("enter complex number--\n");
//   printf("consentant number:-\n ");
//   scanf("%d", &number1.cnum);
//   // printf("variable:-");
//   // scanf("%c", &number1.x);
//   complexNum(number1);
//   return 0;
// }
// void complexNum(struct complex a)
// {
//   char r[3] = {a.cnum, a.x};
//   printf("the complex number is %s", r);
// }

// PRACTICE QUESTION no. 72:-
// make a structure to store Bank Account information of a customer of ABC bank.Also, make an alias for it.
// #include <stdio.h>
// struct pnbbank
// {
//   char name[30];
//   long int accountNo;
//   char ifscCode[10];
//   char branch[25];
// };
// int main()
// {
//   struct pnbbank c1;
//   printf("Name: ");
//   scanf("%s", c1.name);
//   printf("Account No.: ");
//   scanf("%ld", &c1.accountNo);
//   printf("IFSC Code: ");
//   scanf("%s", c1.ifscCode);
//   printf("Branch: ");
//   scanf(" %s", &c1.branch);
//   printf("Name: %s\n", c1.name);
//   printf("Account No.: %ld\n", c1.accountNo);
//   printf("IFSC Code: %s\n", c1.ifscCode);
//   printf("Branch: %s\n", c1.branch);
// }

// PRACTICE QUESTION no. 73:-### ###### ### ### ### ### #### ### ### ### ## ## ##### ### ### ### ## ### ## ## ### ## #
// make a system that can store information of all students, teacher & staff of your collage in the form of structures.
// #include <stdio.h>
// struct student
// {
//   char name[20];
//   int roll;
//   char course;
// };
// struct teacher
// {
//   char name[20];
//   int teachcode;
//   char subject;
// };
// void work();
// void checkentity();
// void checkdata();
// void studentdata(struct student s[], int *n);
// void teacherdata(struct teacher t[], int *n);
// int main()
// {
//   printf("WELCOME\n");
//   work();
// }
// void work()
// {
//   char w;
//   printf("Do you want to Enter data (Enter e) or check data(enter c): ");
//   scanf(" %c", &w);
//   if (w == 'e')
//   {
//     checkentity();
//   }
//   else if (w == 'c')
//   {
//     checkdata();
//   };
// };
// void checkentity()
// {
//   char entity;
//   int sn = 0, tn = 0;
//   struct student bca[60];
//   struct teacher tech[25];
//   printf("Please write your entity(s for Student/ t for teacher): ");
//   scanf(" %c", &entity);
//   if (entity == 'c')
//   {
//     studentdata(bca, &sn);
//     sn++;
//   }
//   else if (entity == 't')
//   {
//     teacherdata(tech, &tn);
//     tn++;
//   }
// }
// void studentdata(struct student s[], int *n)
// {
//   printf("Name: ");
//   scanf("%s", s[*n].name);
//   printf("Roll: ");
//   scanf("%d", &s[*n].roll);
//   printf("Course: ");
//   scanf("%s", s[*n].course);
//   work();
// };
// void teacherdata(struct teacher t[], int *n)
// {
//   printf("Name: ");
//   scanf("%s", t[*n].name);
//   printf("Teacher code: ");
//   scanf("%d", &t[*n].teachcode);
//   printf("Subject: ");
//   scanf("%s", t[*n].subject);
//   work();
// };
// void checkdata() {
// };

// PRACTICE QUESTION no. 74:-
// make a program to read 5 intiger from a file.
// #include <stdio.h>
// int main()
// {
//   int num;
//   FILE *fptr;
//   fptr = fopen("PROJECT.txt", "r");
//   for (int i = 1; i <= 5; i++)
//   {
//     fscanf(fptr, "%d", &num);
//     printf("%d\n", num);
//   }
//   fclose(fptr);
// }

// PRACTICE QUESTION no. 75:-
// make a program to input student information from a user & enter it to  a file.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char name[20];
//   int roll;
//   float CGPA;
//   printf("Enter your information:\nName: ");
//   fgets(name, 19, stdin);
//   printf("Roll NO.: ");
//   scanf("%d", &roll);
//   printf("CGPA: ");
//   scanf("%f", &CGPA);
//   FILE *stuInfo;
//   stuInfo = fopen("student.txt", "w");
//   fprintf(stuInfo, "Name: %s", name);
//   fprintf(stuInfo, "ROLL NO.: %d\n", roll);
//   fprintf(stuInfo, "CGPA: %f\n", CGPA);
// }

// PRACTICE QUESTION no. 76:-
// write a program to write all odd numbers from 1 to n in a file.
// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("enter to which numberto see all odd numbers before it: ");
//   scanf("%d", &n);
//   FILE *fptr;
//   fptr = fopen("oddnumber.txt", "w");
//   for (int i = 1; i <= n; i++)
//   {
//     if (i % 2 == 1)
//     {
//       fprintf(fptr, "%d, ", i);
//     }
//   }
//  fclose(fstr);
// return 0;
// }

// PRACTICE QUESTION no. 77:-
// 2 numbers - a & b, are written in a file. Writen a program to Replace them with their sum.
// #include <stdio.h>
// int main()
// {
//   int n1, n2;
//   FILE *fptr;
//   fptr = fopen("num.txt", "r");
//   fscanf(fptr, "%d", &n1);
//   fscanf(fptr, "%d", &n2);
//   fptr = fopen("num.txt", "w");
//   fprintf(fptr, "sum is %d", n1 + n2);
//   fclose(fptr);
// }

// PRACTICE QUESTION no. 78:-
// write a program to read a string from a file & output to the user.
// #include <stdio.h>
// int main()
// {
//   FILE *fptr;
//   char str[50];
//   fptr = fopen("string.txt", "r");
//   fgets(str, 50, fptr);
//   printf("%s", str);
// }

// PRACTICE QUESTION no. 79:-
// replace the data in a file of p77 with the number of vowels in the string.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   FILE *fptr;
//   fptr = fopen("string.txt", "r");
//   char str[50];
//   int count = 0;
//   fgets(str, 50, fptr);
//   for (int i = 0; i <= strlen(str); i++)
//   {
//     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//     {
//       count++;
//     }
//   }
//   fptr = fopen("string.txt", "w");
//   fprintf(fptr, "%d", count);
//   fclose(fptr);
//   return 0;
// }

// PRACTICE QUESTION no. 80:-
// format the information of 5 stuudents(name, marks,cgpa,course) in a table like structure in a file.
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//   char name[30];
//   int marks;
//   float cgpa;
//   char course[50];
// };
// int main()
// {
//   FILE *fptr;
//   fptr = fopen("student.txt", "w");
//   struct student college[5];
//   for (int i = 0; i < 5; i++)
//   {
//     printf("Name: ");
//     scanf("%s", college[i].name);
//     printf("Marks: ");
//     scanf("%d", &college[i].marks);
//     printf("CGPA: ");
//     scanf("%f", &college[i].cgpa);
//     printf("Course: ");
//     scanf("%s", college[i].course);
//     fprintf(fptr, "Name: %s\n", college[i].name);
//     fprintf(fptr, "Marks: %d\n", college[i].marks);
//     fprintf(fptr, "CGPA: %f\n", college[i].cgpa);
//     fprintf(fptr, "Course: %s\n", college[i].course);
//     fprintf(fptr, "\n");
//   }
//   fclose(fptr);
//   return 0;
// }

// PRACTICE QUESTION no. 81:-
// write a program to allocate memory to store 5 prices.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int *ptr;
//   ptr = (int *)malloc(5 * 4);
//   ptr[0] = 49;
//   ptr[1] = 85;
//   ptr[2] = 32;
//   ptr[3] = 55;
//   ptr[4] = 45;
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d price is %d\n", i, ptr[i]);
//   }
// }

// PRACTICE QUESTION no. 82:-
// write a program to allocate memory of size n, where n is entered by the user.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int n;
//   printf("enter how much memory you want to store: ");
//   scanf("%d", &n);
//   int *ptr;
//   ptr = (int *)calloc(n, sizeof(int));
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d", ptr[i]);
//   }
// }

// PRACTICE QUESTION no. 83 :-
// allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int *ptr;
//   ptr = (int *)calloc(5, sizeof(int));
//   ptr[0] = 25;
//   ptr[1] = 23;
//   ptr[2] = 32;
//   ptr[3] = 31;
//   ptr[4] = 84;
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d\t", ptr[i]);
//   }
//   ptr = (int *)realloc(ptr, 8 * sizeof(int));
//   ptr[5] = 51;
//   ptr[6] = 41;
//   ptr[7] = 91;
//   for (int i = 0; i < 8; i++)
//   {
//     printf("num%d = %d\n", i, ptr[i]);
//   }
//   return 0;
// }

// PRACTICE QUESTION no. 84 :-
// Creat an array of size 5 using calloc and enter its values from user.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int *arr = (int *)calloc(5, sizeof(int));
//   printf("Enter number: ");
//   scanf("%d", &arr[0]);
//   scanf("%d", &arr[1]);
//   scanf("%d", &arr[2]);
//   scanf("%d", &arr[3]);
//   scanf("%d", &arr[4]);
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d\t", arr[i]);
//   }
// }

// PRACTICE QUESTION no. 85 :-
// allocate memory to stort first 5 odd numbers, then reallocate it ti store first 6 number.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int *ptr;
//   ptr = (int *)calloc(5, sizeof(int));
//   int j = 0;
//   // odd
//   for (int i = 1; j != 5; i++)
//   {
//     if (i % 2 == 1)
//     {
//       ptr[j] = i;
//       j++;
//     }
//   }
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d\t", ptr[i]);
//   }
//   printf("\n");
//   // even
//   j = 0;
//   ptr = (int *)realloc(ptr, 6 * sizeof(int));
//   for (int i = 1; j != 6; i++)
//   {
//     if (i % 2 == 0)
//     {
//       ptr[j] = i;
//       j++;
//     }
//   }
//   for (int i = 0; i < 6; i++)
//   {
//     printf("%d\t", ptr[i]);
//   }
// }

// Allocate memory for 500 integers using calloc &then store first 500 natural numbers in that space.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int *ptr = (int *)calloc(500, sizeof(int));
//   for (int i = 0; i < 500; i++)
//   {
//     ptr[i] = i + 1;
//   }
//   for (int i = 0; i < 500; i++)
//   {
//     printf("%d\n", ptr[i]);
//   }
// }

// PRACTICE QUESTION no. 87 :-
// creat a sorting system.asc;
// #include <stdio.h>
// int main()
// {
//   int n = 100;
//   int arr[n] = {31, 48, 41, 77, 90, 29, 59, 88, 51, 63, 18, 80, 87, 19, 13, 87, 52, 52, 8, 47, 89, 68, 14, 87, 36, 65, 6, 26, 10, 17, 73, 10, 55, 93, 14, 3, 93, 40, 8, 46, 81, 86, 85, 30, 48, 55, 39, 14, 47, 78, 26, 3, 31, 32, 96, 32, 45, 65, 42, 78, 89, 50, 53, 63, 71, 23, 23, 22, 41, 68, 15, 14, 94, 51, 68, 42, 45, 27, 5, 60, 40, 25, 45, 31, 79, 72, 74, 17, 17, 86, 61, 58, 27, 83, 63, 60, 89, 4, 58};
//   int min;
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         min = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = min;
//       }
//     }
//   }
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d\t", arr[i]);
//   }
// }