#include<stdio.h>
#include<conio.h>

void main(){
    int n,f;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
        printf("factorial is not possible");
    else {
        f=fact(n);
        printf("factorial of %d! is: %d ",n,f);
    }
    getch();
}

int fact(int n){
    if(n==0)
        return 1;
    else
        return(n*fact(n-1));
}
