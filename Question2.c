#include<stdio.h>
int main(){
    char name;
    int dob,mob;
    printf("Enter your name: ");
    scanf("%c",&name);
    printf("Enter your DOB: ");
    scanf("%d",&dob);
    printf("Enter your mob: ");
    scanf("%d",&mob);
    printf("Name: %c",name);
    printf("DOB: %d",dob);
    printf("Mobile:%d ",mob);
    return 0;
}