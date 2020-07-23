#include<stdio.h>
#include<math.h>

void main(){
    int n,r,b=0;
    printf("Enter a Binary number:");
    scanf("%d",&n);
    int n1=n;
    int i=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        b=b+r*pow(2,i);
        i++;
    }

    printf("The decimal of %d is %d \n",n1,b);

}

