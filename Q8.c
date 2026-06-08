#include<stdio.h>
int main(){
    int i=1,n,num;
    printf("Enter number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        num=2*i;
        printf("%d ",num);
        i++;
    }
    
    return 0;
}
