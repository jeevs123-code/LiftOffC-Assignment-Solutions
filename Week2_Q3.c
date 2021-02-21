#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100];
  	int i,ctr;
  	ctr=1;
 	printf("\n Enter any String :  ");
  	gets(str);
  	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
		{
			ctr++;	
		} 
	}	
	printf("\nThe Total Number of Words in this String = %d",ctr);
	
  	return 0;
}
