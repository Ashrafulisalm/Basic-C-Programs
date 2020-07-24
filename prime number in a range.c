#include<stdio.h>

void main(){
    int n,i,c=0;
    printf("enter a positive number:");
    scanf("%d",&n);
    int j;
    printf("prime number of range %d :",n);
    for(i=2;i<n;i++){
            for(j=2;j<=i;j++){
                if(i%j==0)
                    break;
                }
                if(i==j)
               {
                   printf("%d ",i);
                   c++;
               }
            }
    printf("\ntotal Prime number=%d",c);
    getch();


}
