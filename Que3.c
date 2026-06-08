#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number of natural number: ");
    scanf("%d",&n);
    printf("N natural number: ");
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
    printf("sum of n natural number: ");
     for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d ",sum);
    return 0;
}