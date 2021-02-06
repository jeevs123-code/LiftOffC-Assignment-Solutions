#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,max=0;
	printf("Enter 3 numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	max=a;
	else if(b>a && b>c)
	max=b;
	else
	max=c;
	printf("\nLargest number is : %d",max);
	return 0;
}