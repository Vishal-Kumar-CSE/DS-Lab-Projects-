#include<stdio.h>
int main()
{
   int n,s;
   printf("\nEnter the Number of elements..\t");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements..\n");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
        sort(a,n);
        printf("\nEnter the number want to search in array\t");
        scanf("%d", &s);
         binery(0,n-1,a,s);
        return 0;

}



void sort(int *a, int n)
  {
      int i,j;
      printf("\n");
      for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
               int temp=a[i];
               a[i]=a[j];
               a[j]=temp;

         }
      }
      }
      for(i=0; i<n; i++)
        printf("%d\n", *a++);
  }


 void binery(int beg, int end, int *a, int s)
 {
     int mid;
     if(beg>end){
        printf("\nSearch isn't Successfull!!");
        return;
     }
     mid=(beg+end)/2;
     if(a[mid]==s)
     {
        printf("Searched at %d positon..", mid+1);}
     else if(a[mid]>s)
        binery(beg,mid-1, a, s);
     else if(a[mid]<s)
        binery(mid+1,end,a,s);


 }
