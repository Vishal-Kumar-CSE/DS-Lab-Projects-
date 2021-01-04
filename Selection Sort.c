
# include <stdio.h>
void main()
{
int i, j, min, pos, n, temp;
printf("enter no of elements in the array:\t") ;
scanf("%d", &n) ;
int arr[n];
printf("\nelements in the array are:\t ") ;
for( i=0 ; i<n ; i++ )
{
printf("\nenter element %d:\t", i+1) ;
scanf("%d", &arr[i]);
}
printf("Selection Sort") ;
for( i=1 ; i<n ; i++ )
{
min = arr[i-1] ;
pos = i-1;
for( j= i; j<n ; j++ )
{
if( arr[j] < min )
{
min = arr[j] ;
pos = j ;
}
}
if( pos != i-1 )
{
temp = arr[pos] ;
arr[pos] = arr[i-1] ;
arr[i-1] = temp ;
}
}
printf("\nafter sorting new array is") ;
for( i=0 ; i<n ; i++ )
{
printf(" \t%d", arr[i]) ;
}
}
