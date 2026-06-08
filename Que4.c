#include<stdio.h>
int main(){
    int n ,cub;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cub=i*i*i;
        printf("%d ",cub);
    }

    return 0;
}