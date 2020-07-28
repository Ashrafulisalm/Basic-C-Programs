#include<stdio.h>

int main(){
    int n,arr[10],i,removePosition;
    printf("Enter the number of element:");
    scanf("%d",&n);

    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter the position you yant to remove:");
    scanf("%d",&removePosition);

    for(i=removePosition-1;i<n-1;i++)
        arr[i]=arr[i+1];        //left shift by 1

    printf("Updated Array is:");
    for(i=0;i<n-1;i++)
        printf("%d ",arr[i]);

}
