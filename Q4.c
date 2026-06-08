#include<stdio.h>
int main(){
    int i=1,cub,n;
    printf("Enter number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        cub=i*i*i;
        printf("%d ",cub);
        i++;
    }
    
    return 0;
}