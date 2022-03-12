#include<stdio.h>
int main()
{
	
	//if else if control statement is used when we check same input in number of times then that case we use if else if condition 
	// now we see one example on if else if
	// the seven colors of VIBGYOR
	
	char code;
	scanf("%c",&code);
	
	if(code=='V' || code=='v')
	printf("voilet\n");
	else if(code=='I' || code=='i')
      printf("indigo\n");
      else if(code=='B' || code=='b')
	 printf("blue\n");
	 else if(code=='G'|| code=='g')
	 printf("green\n");
	 else if(code=='Y' || code=='y')
	 printf("yellow\n");
	 else if(code=='O'|| code=='o')
	 printf("orange\n");
	 
	 else if(code=='r' || code=='R')
	 printf("red\n");
	 
	
	
	else
	printf("invalid color code\n");
	return 0;
	
}
