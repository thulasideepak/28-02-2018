#include <stdio.h>
int main() 
{
	int n1,n2,i;
	printf("\nenter the two numbers:");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		printf("\n%d",n1-n2);
	}
	else
	{
		printf("\n%d",n2-n1);
	}
	return 0;
}
