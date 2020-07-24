#include<stdio.h>

void main(){
    int n,i,j,k,count=1;
    printf("Enter number of rows:\n");
    scanf("%d",&n);

     for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");

            for(k=1;k<=count;k++)
                    printf("*");
                    count+=2;
                printf("\n");
     }
     //for reverse peramid

     count=count-4;
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
