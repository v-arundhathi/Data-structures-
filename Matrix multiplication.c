#include<stdio.h>

int main(void)
{
  int i, j, r2, c2, r1, c1, k, tot = 0;
  int a[10][10], b[10][10], mul[10][10];

  printf(" Please insert the number of rows and columns for first matrix \n ");
  scanf("%d%d", &r1, &c1);

  printf(" Insert your matrix elements : \n ");
  for (i = 0; i < r1; i++)
    for (j = 0; j < c1; j++)
      scanf("%d", &a[i][j]);
 
  printf(" Please insert the number of rows and columns for second matrix\n");
  scanf(" %d %d", &r2, &c2);

  if (c1 != r2)
    printf(" Your given matrices cannot be multiplied with each other. \n ");
  else
  {
    printf(" Insert your elements for second matrix \n ");
 
    for (i = 0; i <r2; i++)
      for (j = 0; j < c2; j++)
        scanf("%d", &b[i][j] );

    for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++) {
        for (k = 0; k < r2; k++) {
          tot = tot + a[i][k] * b[k][j];
        }
        mul[i][j] = tot;
        tot = 0;
      }
    }
 
    printf(" The result of matrix multiplication or product of the matrices is: \n "); 
    for (i = 0; i < r1; i++) {
      for (j = 0; j <c2; j++)
        printf("%d \t", mul[i][j] );
      printf(" \n ");
    }
  }
  return 0;
}
