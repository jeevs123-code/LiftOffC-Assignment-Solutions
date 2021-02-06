#include <stdio.h>
int main()
{
    int a,b;
    int sum,diff,prod,mod;
    float div;
    printf("Enter any two numbers :\n");
    scanf("%d%d",&a,&b,"\n"); 
    sum=a+b;
    diff=a-b;
    prod=a*b;
    div=(float)a/b;
    mod=a%b;
    printf("\n");
    printf("Sum	   %d+%d = %d\n",a,b,sum);
    printf("Difference %d-%d = %d\n",a,b,diff);
    printf("Product    %d*%d = %d\n",a,b,prod);
    printf("Quotient   %d/%d = %f\n",a,b,div);
    printf("Modulus    %d%%%d = %d\n",a,b,mod);
    return 0;
}
