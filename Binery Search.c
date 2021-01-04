#include<stdio.h>
int main()
{

    int n;
    printf("\nEnter the Number of elements..\t");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements..\n");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
        sort(a,n);
         binery(a,n);
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

  void binery(int *a, int n)
  {
      int low, high, mid,s;
      low=0;
      high=n;
      mid=(low+high)/2;
      printf("\nEnter the Searching Element:\t");
      scanf("%d", &s);
      while(low<=high)
      {
          if(s==a[mid]){
            if(mid+1==1)
            printf("\nSearch successful at %dst position!!\n", mid+1);
            else if(mid+1==2)
                printf("\nSearch successful at %dnd position", mid+1);
                 else if(mid+1==3)
                printf("\nSearch successful at %drd position", mid+1);
                else
                     printf("\nSearch successful at %dth position", mid+1);


          break;}
          else if(s<a[mid])
          high=mid-1;
          else if(s>a[mid])
           low=mid+1;
           mid=(low+high)/2;
             }
   if(low>high)
    printf("\nSo Sorry!! Not Found...");
  }

