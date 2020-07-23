#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    printf("Enter two numbet to swap-\n");
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Now A is:%d and B is: %d",a,b);
    getch();


}
