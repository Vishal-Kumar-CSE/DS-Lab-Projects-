#include<stdio.h>
void main()
{
   int n,i,j,temp;
   printf("\nEnter the no. of elements\n") ;
   scanf("%d",&n);
   int a[n];
   printf("\nEnter the elements..\n");
   for(i=0; i<n; i++)
    scanf("%d", &a[i]);
   for(i=1; i<n; i++)
   {
      int current=a[i];
      int j=i-1;
      while(a[j]>current && j>=0){
        a[j+1]=a[j];
        j--;
      }
      a[j+1]=current;

   }
   for(i=0; i<n; i++)
    printf("%d\n", a[i]);
}
