#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter first number:-");
	scanf("%d",&n1);
	printf("\nEnter second number:-");
	scanf("%d",&n2);
	if(n1>n2)
	{
		printf("%d is the biggest number among %d and %d",n1,n1,n2);
	}
	else
	{
		printf("%d is the biggest number among %d and %d",n2,n1,n2);
	}
	return 0;
}
