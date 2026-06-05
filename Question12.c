#include<stdio.h>
int main(){
    int employee_id,work_hour,amount_phour;
    float salary;
    printf("Enter employee id: ");
    scanf("%d",&employee_id);
    printf("Enter total worked hour of month: ");
    scanf("%d",&work_hour);
    printf("Enter amount recieved per hour: ");
    scanf("%d",&amount_phour);
    salary=work_hour*amount_phour;
    printf("Employee id= %d Salary= %.2f",employee_id,salary);

    return 0;
}