#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("The square natural numbers  %d :", n);
    for (int i = 1; i <= n; i++) {
        int square = i * i;
        printf("%d ", square);
        sum += square;
    }
    printf("\nsum of squares is: %d ", sum);

    return 0;
}