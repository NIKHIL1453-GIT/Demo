#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter number:-");
	scanf("%d",&n1);
	(n1>0) ? printf("%d is a positive",n1)
	:(n1<0) ? printf("%d is a negative",n1)
	:printf("%d is a neutral",n1);
	return 0;
}
