#include<stdio.h>
#include<conio.h>

void main(){
int n,r,d,reverse=0;
printf("Enter a number:\n");

scanf("%d",&n);
d=n;
    while(n!=0){
        reverse=reverse*10;
        reverse=reverse+n%10;
        n=n/10;
    }
if(d==reverse)
    printf("%d is a pilandrome Number.",d);
else
    printf("%d is not a pilandrome number.",d);
}
