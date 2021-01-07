#include<stdio.h>

quickSort(int a[], int l, int r){

if(l<r){
    int pi=partition(a,l,r);
    quickSort(a,l, pi-1);
    quickSort(a,pi+1,r);
}
}

int partition(int a[], int l, int r){
int pivot=a[r];
int i=l-1;
for(int j=l; j<r; j++){
    if(a[j]<pivot){

        i++;
        swap(a,i,j);
    }
}
swap(a,i+1,r);
return i+1;
}
void swap(int a[], int i, int j){
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}

int main(){

int n;
printf("\nEnter total no. of Item");
scanf("%d", &n);
int a[n];
printf("\nEnter values..\n");
for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    quickSort(a,0,n-1);
printf("\nAfter Quick Sort values are..\n");
    for(int i=0; i<n; i++)
    printf("%d\n", a[i]);

}
