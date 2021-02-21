#include<stdio.h>
int main()
{
    int n=0,i=0,sum1=0,sum2=0;
    printf("Enter the number of elements to input: ");
    scanf("%d\n",&n);
    int arr[n];
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
    	scanf("%d\n",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		sum1=sum1+arr[i];
		if(i%2==0)
		sum2=sum2+arr[i];
	}
	printf("\nSum of all even elements: %d\n",sum1);
	printf("Sum of all even position elements: %d",sum2);
	return 0;
}
