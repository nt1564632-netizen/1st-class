#include<stdio.h>
int main(){
    float weight,num_purchases,average;
    printf("Enter weight: ");
    scanf("%f",&weight);
    printf("Enter no of purchase: ");
    scanf("%f",&num_purchases);
    average=(weight+num_purchases)/2;
    printf("Average= %f",average);
    return 0;
}