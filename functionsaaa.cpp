#include<stdio.h>

int primenum(int a);
int main()

{
	 int k[3];
	 
 
  k[0]=5;
  k[1]=10;
  k[2]=3;
 
    if(primenum(k[0])==0)
	printf(" %d is a Prime Number \n", k[0]);
	else
    printf("%d is not a prime number\n", k[0]);
    
    if(primenum(k[1])==0)
	printf(" %d is a Prime Number \n", k[1]);
	else
    printf("%d is not a prime number \n", k[1]);

    if(primenum(k[2])==0)
	printf(" %d is a Prime Number \n", k[2]);
	else
    printf("%d is not a prime number \n", k[2]);
	
	return 0; 
}

int primenum(int a)
{
	int b, i;
	b=0;
	for(i=1; i<=a; i++)
	{
		if(a%i == 0)
        b = b+1;
	}
	
	if(b==2)
	return 0;

	else
	return 1;
	
}
