#include<stdio.h>
#include<math.h>

void main(){
    int n,d,r,bn,b[100];
    printf("Enter a decimal number:\n");
    scanf("%d",&n);
    d=n;
    int i=0;
    while(n!=0){
        bn=i;
        r=n%2;
        b[i]=r;
        n=n/2;
        i++;
    }
    printf("The binary of %d is :",d);
    int j=bn;
    for(j;j>=0;j--){
        printf("%d",b[j]);
    }
}
