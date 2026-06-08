#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum+i;
        printf("%d ",i);
        printf("%d \n",sum);
        i++;   
    }
    return 0;
}