#include<stdio.h>

void main(){
    char a[100],i,n;
    printf("Enter a line:");
    gets(a);
    n=strlen(a);
    int count=1;
    for(i=0;i<n;i++){
        if(a[i]==' '||a[i]=='\n')
        count++;
    }

    printf("Number of Word: %d",count);
}
