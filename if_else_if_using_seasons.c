#include<stdio.h>
int main()
{
	
	int n;
	printf(" enter the number\n");
	scanf("%d",&n);
	
	if(n==3 || n==4 || n==5)
	printf("the season is summer\n");
	
	else if(n==6 || n==7 || n==8 || n==9 )
	printf("the season is raining\n");
	
	 else if(n==10 || n==11 || n==12)
	printf("the season is \n");
	
	else
	{
		printf("the given month number is invalid");
	}
	
	
	return 0;
	
}
