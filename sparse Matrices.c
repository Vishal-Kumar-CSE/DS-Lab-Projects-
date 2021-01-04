#include <stdio.h>
int main()
{
int rows, columns, size, count = 0;
printf("\nEnter the no. of rows:\t");
scanf("%d", &rows);
printf("\nEnter the no. of Columns:\t");
scanf("%d", &columns);
int a[rows][columns];
size = rows * columns;

for(int i = 0; i < rows; i++){
for(int j = 0; j < columns; j++){
scanf("%d", &a[i][j]);
}
        }

for(int i = 0; i < rows; i++){
for(int j = 0; j < columns; j++){
if(a[i][j] == 0)
count++;
}
        }

        if(count > (size/2))
            printf("Given matrix is a sparse matrix");
        else
            printf("Given matrix isn't  a sparse matrix");

        return 0;
    }
