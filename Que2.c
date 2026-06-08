#include<stdio.h>
int main(){
    int n=10,sum=0;
    printf("Sum of first 10 natural number: ");
    for(int i=1;i<=10;i++){
        sum=sum+i;
        printf("%d ",sum);
    }

    return 0;
}