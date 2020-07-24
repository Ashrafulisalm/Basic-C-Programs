#include<stdio.h>

void main(){
    int n,i,p;
    printf("enter a positive number:");
    scanf("%d",&n);


    for(i=2;i<=n/2;i++){
        if(n%i==0){
            p=0;
            break;
        }
    }

    if(p==0)
    printf("Not prime");
    else
    printf("Prime");

    getch();


}
