#include<stdio.h>
#include<conio.h>

void main(){
int a,b,*p,*q,sum;
printf("Enter two number:\n");
scanf("%d %d",&a,&b);
sum=add(&a,&b);
printf("sum of %d and %d is:%d",a,b,sum);
}

int add(int *p,int *q){
 return *p+*q;
}
