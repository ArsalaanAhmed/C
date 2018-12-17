#include<stdio.h>

int main()
{
	char str1[30], str2[30];
	int i,k=0;
	
	printf("Enter the string: ");
	gets(str1);
	
	for(i=0; str1[i]!= '\0'; ++i)
{	
	if(str1[i+k] == ' ')
  	{
	  k++;
    }
	str2[i]=str1[i+k];
}
   printf("your answer without space is: ");
   puts(str2);
   return 0;
}
