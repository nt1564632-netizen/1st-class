 #include<stdio.h>
int main(){
    int i=1,n,sum=0,sq;
    printf("Enter number: ");
    scanf("%d",&n);
    while (i<=n)
    {
      sq=i*i*i;
      printf("Square: %d ",sq);
      sum=sum+sq;
      printf("Sum: %d \n",sum);
      i++;

    }
    
    return 0;
}