#include<stdio.h>
int main(){
    int i=1,n,odd;
    printf("Enter number: ");
    scanf("%d",&n);
    while (i<=10)
    {
        odd=2*i-1;
        printf("%d ",odd);
        i++;
    }
    
    return 0;
}