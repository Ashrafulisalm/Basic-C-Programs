#include<stdio.h>

int main(){
    int n,a[10],b[10],i;
    printf("Enter the array size:");
    scanf("%d",&n);

    printf("Enter data in array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    int j=0;
    for(i=n-1;i>=0;i--)
    b[j++]=a[i];

    printf("In Reverse Order : ");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }

}
