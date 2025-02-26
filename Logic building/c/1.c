#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter first number:-");
	scanf("%d",&n1);
	printf("\nEnter second number:-");
	scanf("%d",&n2);
	n3 = (n1>n2) ? (n3=n1) : (n3=n2);
	printf("The biggest number among %d and %d is:%d",n1,n2,n3);
	return 0;
}
