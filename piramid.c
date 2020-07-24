
#include<stdio.h>

void main(){
    int n,i,j,k,count=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("\n");

     for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");

            for(k=1;k<=count;k++)
                    printf("*");
            count+=2;
            printf("\n");
     }

     getch();
}
