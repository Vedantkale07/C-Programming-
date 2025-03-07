#include <stdio.h>
int main()
{
  // declare and initialize an array
  int arr[4][4] = {{50,60,10,20},{70,80,90,99}};
  int i,j,n;
  
  // display 2x2 matrix using for loop
  printf("enter the matrix you want");
  scanf("%d",&n);
  printf("The matrix elements are:\n");

  // outer loop for row
  for(i=0; i<n; i++) {
    // inner loop for column
    for( j=0; j<n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n"); // new line
  }

  return 0;
}
