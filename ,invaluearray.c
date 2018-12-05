#include <stdio.h>


int minmum (int a, int minn[a]);



int main()
{
	int i;
	int e; 
	
	printf("Enter the number of elements: ");
	scanf("%d", &e);
	
	int mini[e];
	for (i=0; i<e; i++)
	{
		printf("Element %d :", i);
		scanf("%d", &mini[i]);
	}
	
	int answer;
	
	answer = minmum(e, mini);
    
	printf(" the minimum value is %d", answer);
	return 0;	
}

int minmum (int a, int minn[a])

{
	int i;
	int minivalue = minn[0];
	 
	for(i=1; i<a; i++)
	{
		if (minivalue > minn[i])
		{
		minivalue= minn[i];
	    }
	 } 
	 
	 
    return minivalue;	 
}



