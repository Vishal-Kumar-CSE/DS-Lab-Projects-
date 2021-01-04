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
   for(i=0; i<n-1; i++)
   {
       for(j=i+1; j<n; j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }

   }
   for(i=0; i<n; i++)
    printf("%d\n", a[i]);
}
