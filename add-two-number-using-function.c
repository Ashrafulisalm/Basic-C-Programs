#include<stdio.h>
#include<conio.h>
void main(){
int a,b,sum;
printf("Enter two number:");
scanf("%d %d",&a,&b);
sum=add(a,b);
printf("Sum of %d and %d is: %d",a,b,sum);

}
int add(int a,int b){
    return a+b;
}

