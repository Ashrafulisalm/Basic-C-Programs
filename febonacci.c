#include<stdio.h>

void main(){
    int f0,f1,f,n,i;
    printf("Enter the amount of number in series:");
    scanf("%d",&n);
    f0=0;f1=1;
    printf("\n Febonacci series :");
    for(i=0;i<n;i++){
        printf("%d ",f0);
        f=f0+f1;
        f0=f1;
        f1=f;
    }
}
