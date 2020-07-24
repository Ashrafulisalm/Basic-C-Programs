#include<stdio.h>

void main(){
    int n,i,j,k,count;
    printf("Enter the number of Row:");
    scanf("%d",&n);
    count=n;
    printf("\n");
    for(i=1;i<=n-1;i++){
        for(j=1;j<=i;j++)
        printf(" ");

        for(k=1;k<=count;k++)
        printf("*");

        count-=2;
        printf("\n");
    }

getch();
}
