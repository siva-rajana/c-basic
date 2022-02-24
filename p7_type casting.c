#include<stdio.h>
int main()
{
	/* note: we are perofrming any assignment operator in c,procedure is same for all assighnment operatore(+,-,*,/) on data types(int float,double,char).
	but here small modification is, while performing division of any 2 integers result is point values then results is not come in point value,come in some un point value ex.2,3,5...so that not pertofrm on int becoz both are int values,
	so then these type of programs are pertfprm on int type we will give any one value should be float ex.a=10,b=2.0
	so here one imp note is type casting is to convert one data type to anothe data type is called type cvasting*/ 
	int a=5,b=2;
	float c;
	c=(float)a/b;
	printf("%f",c);
	
	
	
	
	
	
	return 0;
	
}
