#include<stdio.h>
int main()
{
	int r1,r2,r3,r4,r5;
	float avg;
	scanf("%d%d%d%d%d",&r1,&r2,&r3,&r4,&r5);
	avg=(float)(r1+r2+r3+r4+r5)/5;
	
	printf("average is %.2f\n",avg);
	
	if(r1>avg)
	{
		printf("the  r1 is qualified\n");
	}
	if(r2>avg)
	{
		printf("the r2 is qualified\n");
		
	}
	if(r3>avg)
	{
		printf("the r3 is qualified\n");
		
	}
	if(r4>avg)
	{
		printf("the  r4 is qualified\n");
	}
	if(r5>avg)
	{
		printf("the  r5 is qualified\n");
	}
	return 0;
}
