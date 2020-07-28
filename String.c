#include<stdio.h>

void main(){
    char a[100],b[100];
    printf("Enter a line:\n");
    gets(a);
    printf("The line is:\n");
    puts(a);


    printf("\nEnter another line:\n");
    gets(b);
    int i=0;
    printf("\nThe line is:");
    while(b[i]!='\0'){
        printf("%c",b[i]);
        i++;
    }
}
