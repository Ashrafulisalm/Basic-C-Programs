#include<stdio.h>

void main(){
    int n,i,s=0;
    printf("Enter the range of N:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
            s=s+i;
            if(i<5){
            printf("%d+",i);
            }
    }
    printf(".....+%d=%d",n,s);
}
