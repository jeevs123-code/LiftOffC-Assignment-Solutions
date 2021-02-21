#include<stdio.h>
int main()
{
	int num=0,d=0,sum=0,temp=0;
	printf("Enter a number: \n");
	scanf("%d\n",&num);
	temp=num;
	while(temp!=0)
	{
		d=temp%10;
		sum=sum+d;
		temp=temp/10;
	}
	printf("Sum of the digits = %d",sum);
	return 0;
}
