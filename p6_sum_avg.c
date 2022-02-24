#include<stdio.h>
int main()

{
	int a,b,c,d,e,s,A;
	printf("enter any values of  five numbers ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	s=a+b+c+d+e;
	A=(s/5);
	
	printf("the sum of the given values are %d\n",s);
	printf("the average of given values are %d",A);
	
	
	
	
	
	return 0;
	
}
