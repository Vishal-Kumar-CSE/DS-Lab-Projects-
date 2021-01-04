#include<stdio.h>
void main(){
int n,s,flag=0;
printf("\nEnter the size of array");
scanf("%d", &n);
int a[n];
for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
}
printf("\nEnter the Search Element.\t");
scanf("%d", &s);

for(int i=0 ;i<n; i++){
    if(a[i]==s){
        printf("Number is found at %d Position", i+1);
        flag=0;
    }
    else
        flag=1;
}
if(flag==1)
    printf("Not found");
}
