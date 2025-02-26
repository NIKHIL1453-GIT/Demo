#include<stdio.h>
int main()
{
	int n1;
	printf("Enter number:-");
	scanf("%d",&n1);
	if(n1>0)
	{
		printf("%d is a positive number",n1);
	}
	else if(n1<0)
	{
		printf("%d is a negative number",n1);
	}
	else
	{
		printf("%d is a neutral number",n1);
	}
	return 0;
}
