# include<stdio.h>
int main()
{

   int n;
  printf("\nEnter total no. of elements:\t");
    scanf("%i", &n);
    int a[n];
    printf("\nPls Enter Your Elements\n");
    for(int i=0; i<n; i++)
     scanf("%i", &a[i]);
     printf("\nYour Entered elements are...\n\n");
     print(a,n);
     printf("\n\nAfter performing merge sort elemets are..\n\n");
    merge_sort(a,0,n-1);
    print(a,n);

}


void merge_sort(int* a,int low, int high)
{

    int mid;
    if(low<high){
    mid=(low+high)/2;
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    mer(a,low,mid,high);

}
}
void mer(int* a, int i1,int j1, int j2)
{
   int i,j,k,temp[20];
   i=i1;
   j=j1+1;
   k = 0 ;
while(i <=j1 && j <= j2)
{
if(a[i]<a[j])
{
temp[k++]=a[i++];
}

else
{
temp[k++] = a[j++] ;
}

}
while(i <=j1)
{
temp[k++] = a[i++] ;

}
while(j <= j2)
{
temp[k++] = a[j++] ;

}
for(i = j2; i>= i1; i--)
{
a[i] = temp[--k] ;
}
}
void print(int* a, int n)
{

    for(int i=0; i<n; i++)
        printf("%i\t", *a++);
}

