#include<stdio.h>

int main()
{
	int i,j=1,num;
	printf("Enter A Number:");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
		j=j*i;

	printf("Factorial of %d is %d",num,j);
}}}}}
