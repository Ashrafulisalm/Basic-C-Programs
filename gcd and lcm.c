#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,x,y,gcd,lcm ,t;
    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while(b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    lcm=(x*y)/gcd;

    printf("the gcd of %d and %d is %d.\n",x,y,gcd);
    printf("the lcm of %d and %d is %d.\n",x,y,lcm);
}
