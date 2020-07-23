#include<stdio.h>
#include<conio.h>

void main(){
    int n,r,bn=0;
    printf("enter a decimal number:\n");
    scanf("%d",&n);
    int i=1;
    int d=n;
    while(n!=0){
        r=n%2;
        bn=bn+(r*i);
        n=n/2;
        i*=10;
    }

    printf("The binary of %d is %d\n",d,bn);
}
