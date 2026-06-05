#include<stdio.h>
int main(){
    char name;
    int dob;
    long mob;
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your DOB: ");
    scanf("%d",&dob);
    printf("Enter your mob: ");
    scanf("%ld",&mob);
    printf("Name: %c\n",name);
    printf("DOB: %d\n",dob);
    printf("Mobile:%ld\n ",mob);
    return 0;
}