#include<stdio.h>

int main() 
{   
    int a, b, i;
	
	printf("Enter a value for A : ");
	scanf("%d", &a);
	
	b=0;
	for (i=1; i<=a;  i++)
	{	
   if(a%i == 0)
  b = b+1;
}
if(b==2)

printf("%d is a prime number ", a);

else
printf("%d is not a prime number", a);	
	return 0;
}
