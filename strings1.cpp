#include<stdio.h>
int main()
{ char str[1000], a;
	int i, frequency=0;
	
	printf("Enter the string: ");
	gets(str);
	
	printf("Enter the character to find the frequency: ");
	scanf("%c", &a);
	
	for(i=0; str[i]!= '\0'; ++i)
	{
		if(a==str[i])
		++frequency;
	}

printf("frequency of %c = %d", a, frequency);
return 0;
}
