#include<stdio.h>
void main()

{
	
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	
	printf("a\tb\t&\t|\t^\n");
	printf("%d\t%d\t%d\t%d\t%d",a,b,a&b,a|b,a^b);
	
}
