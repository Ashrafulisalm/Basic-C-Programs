#include<stdio.h>
#include<conio.h>

void main(){
    int n,r,f;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    printf("The result of %dC%d: %d\n",n,r,findnCr(n,r));
    printf("The result of %dP%d : %d\n",n,r,findnPr(n,r));
}

int findnCr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int findnPr(int n,int r){
    return fact(n)/fact(n-r);
}

int fact(int f){
    if(f==0)
        return 1;
    else
        return(f*fact(f-1));
}
