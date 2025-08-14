#include <stdio.h>
#include <string.h>
void takeinput(int r, int c, int m[][c]);
void printresult(int r, int c, int m[][c]);
int operations();
int addmatrix();
int subtractmatrix();
int multiplymatrix();
int transposematrix();
int determinamrematrix();
int main()
{
  printf("<--:WELCOME:-->\n");
  int choice = 6;
  while (choice != 0)
  {
    if (choice == 6)
    {
      choice = operations();
    }
    else if (choice == 1)
    {
      choice = addmatrix();
    }
    else if (choice == 2)
    {
      choice = subtractmatrix();
    }
    else if (choice == 3)
    {
      choice = multiplymatrix();
    }
    else if (choice == 4)
    {
      choice = transposematrix();
    }
    else if (choice == 5)
    {
      choice = determinamrematrix();
    }
  }
  printf("THANK YOU!");
  return 0;
}
int operations()
{
  int choice = 7;
  printf("<--:OPERATIONS:-->\n1. Add two matrices (1)\n2. Subtract matrices (2)\n3. Multiply matrices (3)\n4. Transpose matrix (4)\n5. Determinant (2*2, 3*3 only) (5)\n6. Exit (6)\nEnter Code: ");
  scanf("%d", &choice);
  while (choice != 0)
  {
    if (choice > 0 && choice < 6)
    {
      return choice;
    }
    else if (choice == 6)
    {
      return 0;
    }
    else
    {
      printf("Please enter correct code!\n");
      printf("\n");
      return 6;
    }
  }
}
void takeinput(int r, int c, int m[][c])
{
  printf("Enter Matrix values:-->\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("Row %d Column %d: ", i, j);
      scanf("%d", &m[i][j]);
    }
  }
  printf("Data entered successfully!\n");
}
void printresult(int r, int c, int m[][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d\t", m[i][j]);
    }
    printf("\n");
  }
}
int addmatrix()
{
  printf("Addition of Matrix!\n");
  int mr, mc;
  printf("Enter matrix row numbers: ");
  scanf("%d", &mr);
  printf("Enter matrix column number: ");
  scanf("%d", &mc);
  int matrix_num1[mr][mc];
  int matrix_num2[mr][mc];
  int matrix_result[mr][mc];
  takeinput(mr, mc, matrix_num1);
  takeinput(mr, mc, matrix_num2);
  for (int i = 0; i < mr; i++)
  {
    for (int j = 0; j < mc; j++)
    {
      matrix_result[i][j] = matrix_num1[i][j] + matrix_num2[i][j];
    }
  }
  printf("Sum =>\n");
  printresult(mr, mc, matrix_result);
  char c[5];
  printf("Do you want to sum again (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y' || c[0] == 'Y')
  {
    return 1;
  }
  return 6;
}
int subtractmatrix()
{
  printf("Subtraction of Matrix!\n");
  int mr, mc;
  printf("Enter matrix row numbers: ");
  scanf("%d", &mr);
  printf("Enter matrix column number: ");
  scanf("%d", &mc);
  int matrix_num1[mr][mc];
  int matrix_num2[mr][mc];
  int matrix_result[mr][mc];
  takeinput(mr, mc, matrix_num1);
  takeinput(mr, mc, matrix_num2);
  for (int i = 0; i < mr; i++)
  {
    for (int j = 0; j < mc; j++)
    {
      matrix_result[i][j] = matrix_num1[i][j] - matrix_num2[i][j];
    }
  }
  printf("Subtract =>\n");
  printresult(mr, mc, matrix_result);
  char c[5];
  printf("Do you want to subtract again (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y' || c[0] == 'Y')
  {
    return 2;
  }
  return 6;
}
int multiplymatrix()
{
  printf("Multiplication of Matrix!\n");
  int m1r;
  int m1c;
  int m2r;
  int m2c;
  printf("Enter first matrix row numbers: ");
  scanf("%d", &m1r);
  printf("Enter first matrix column number: ");
  scanf("%d", &m1c);
  int matrix_num1[m1r][m1c];
  takeinput(m1r, m1c, matrix_num1);
  m2r = m1c;
  printf("As per rules second matrix row number is equals to first matrix column number!\nEnter second matrix column number: ");
  scanf("%d", &m2c);
  int matrix_num2[m2r][m2c];
  takeinput(m2r, m2c, matrix_num2);
  int matrix_result[m1r][m2c];
  for (int i = 0; i < m1r; i++)
  {
    for (int j = 0; j < m2c; j++)
    {
      matrix_result[i][j] = 0;
      for (int n = 0; n < m1c; n++)
      {
        matrix_result[i][j] += matrix_num1[i][n] * matrix_num2[n][j];
      }
    }
  }
  printf("Multiplication of Matrix!\n");
  printresult(m1r, m2c, matrix_result);
  char c[5];
  printf("Do you want to multiply again (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y' || c[0] == 'Y')
  {
    return 3;
  }
  return 6;
}
int transposematrix()
{
  printf("Transpose of Matrix!\n");
  int mr, mc;
  printf("Enter matrix Rows number: ");
  scanf("%d", &mr);
  printf("Enter matric column number: ");
  scanf("%d", &mc);
  int tran_matrix[mr][mc];
  int result_matrix[mc][mr];
  takeinput(mr, mc, tran_matrix);
  for (int i = 0; i < mr; i++)
  {
    for (int j = 0; j < mc; j++)
    {
      result_matrix[j][i] = tran_matrix[i][j];
    }
  }
  printf("Transpose matrix =>\n");
  printresult(mc, mr, result_matrix);
  char c[5];
  printf("Do you want to transpose another matrix (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y' || c[0] == 'Y')
  {
    return 4;
  }
  return 6;
}
int determinamrematrix()
{
  int mr, mc, m;
  printf("determination of Matrix (only 2*2 and 3*3)!\n1. 2*2 det (2)\n2. 3*3 det (3)\nEnter Code: ");
  scanf("%d", &m);
  int result;
  if (m == 2)
  {
    mr = 2;
    mc = 2;
    int det_matrix[mr][mc];
    takeinput(mr, mc, det_matrix);
    result = (det_matrix[0][0] * det_matrix[1][1]) - (det_matrix[0][1] * det_matrix[1][0]);
    printf("The Determine of matrix is %d\n", result);
  }
  else if (m == 3)
  {
    mr = 3;
    mc = 3;
    int det_matrix[mr][mc];
    takeinput(mr, mc, det_matrix);
    result = det_matrix[0][0] * (det_matrix[1][1] * det_matrix[2][2] - det_matrix[2][1] * det_matrix[1][2]) - det_matrix[0][1] * (det_matrix[1][2] * det_matrix[2][0] - det_matrix[2][2] * det_matrix[1][0]) + det_matrix[0][2] * (det_matrix[1][0] * det_matrix[2][1] - det_matrix[2][0] * det_matrix[1][1]);
    printf("The Determine of matrix is %d\n", result);
  }
  else
  {
    printf("Please enter valid input!\n");
    return 5;
  }
  char c[5];
  printf("Do you want to transpose another matrix (yes/no): ");
  scanf("%s", c);
  if (c[0] == 'y' || c[0] == 'Y')
  {
    return 5;
  }
  return 6;
}