#include<stdio.h>

int main(){
    int n,arr[10],i,position,value;
    printf("Enter the number of element:");
    scanf("%d",&n);

    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter the position to insert:");
    scanf("%d",&position);

    printf("Enter the value to insert:");
    scanf("%d",&value);

    for(i=n-1;i>=position-1;i--)
    arr[i+1]=arr[i];        //right shift by 1

    arr[position-1]=value;

    printf("Updated array is:\n");
    for(i=0;i<=n;i++)
     printf("%d ",arr[i]);

     getch();

}
