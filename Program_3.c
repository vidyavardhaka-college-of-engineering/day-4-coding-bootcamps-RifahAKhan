//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  //Declare all the variables[row, col, array a(2D array), i] used in the code
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   //Read the elements of matrix a using nested for loop and scanf statment
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
   int i,j,m,n;
   int matrix[10][20];
   printf("Enter number of rows: ");
   scanf("%d",&m);
   printf("Enter number of columns ");
   scanf("%d",&n);

   for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
       printf("Enter data in [%d][%d]: ",i,j);
       scanf("%d",&matrix[i][j]);
     }
   }

   for(i=0;i<m;i++){
     for(j=0;j<n;j++){
       printf("%d\t",matrix[i][j]);
     }
     printf("\n");
   }
  
  return 0;
}
