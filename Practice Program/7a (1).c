#include<stdio.h>
void main()
{
	int year;
	printf("enter year");
	scanf("%d",&year);

	if(year%4==0 && year%100!=0)
	{
		printf("leap year\n");
	}

	else if(year%400==0)
	{
		printf("leap year\n");
	}

	else
		{
			printf("not leap year\n");
		}
}
















