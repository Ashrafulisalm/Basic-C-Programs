#include<stdio.h>

int main(){
    int i,n,a[10],maxData,min;
    printf("Enter the number of data:");
    scanf("%d",&n);

    printf("Enter %d data for array:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    maxData=a[0];
    min=a[0];
    for(i=1;i<=n;i++){
        if(a[i] > maxData){
            maxData=a[i];
        }

         if(a[i] < min){
            min=a[i];
        }

    }

    printf("\nMin data in array: %d ",min);
    printf("\nMax data in array: %d ",maxData);

    getch();

}
