#include<stdio.h>
int main(){
    int n,even,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        even=2*i;
        sum=sum+even;
        printf("%d ",sum);
    }
    return 0;
}