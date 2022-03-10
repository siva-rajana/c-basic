#include<stdio.h>
int main()
{
	int p,t,r,si;
	printf("enter the values of p,t,r\n");
	scanf("%d%d%d",&p,&t,&r);
	/*the formula of simple intrest is (p*t*r/100)
	p-->principle amount
	r-->rate of intrest
	t-->alwqays take monts some cases they prefers then change t*/
	
	si=(p*t*r/100);
	
	
	printf("the simple intrest of that much of amount is %d",si);
	
	return 0;
	}
