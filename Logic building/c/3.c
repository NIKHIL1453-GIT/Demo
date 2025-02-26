#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter first number:-");
	scanf("%d",&n1);
	printf("\nEnter second number:-");
	scanf("%d",&n2);
	switch(n1>n2)
	{
		case 1:
			printf("%d is the biggest number",n1);
		break;
		case 0:
			printf("%d is the biggest number",n2);
		break;
	}
	return 0;
}
