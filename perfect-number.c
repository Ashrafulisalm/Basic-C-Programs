#include<stdio.h>
#include<conio.h>

void main(){
int n,d,sum=0;
printf("Enter a number:");
scanf("%d",&n);
int temp=n;
int i=1;
while(i<n){
    d=n%i;
    if(d==0){
        sum=sum+i;
    }
    i++;
}
if(sum==temp)
    printf("%d is a perfect number.",temp);
else
    printf("%d is not a perfect number",temp);
}
