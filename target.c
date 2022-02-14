#include<stdio.h>
int main()
{
	int balance=100;
	int target=1000;
	float rate=2.0;
	int year=0;
	do
	{
		float interest=balance*rate;
		balance=balance+interest;
		year++;
	}while(balance<target);
	printf("%d No. of years to achieve balance %d.\n",year,balance);
	return 0;
	printf("Hye");
}

	
