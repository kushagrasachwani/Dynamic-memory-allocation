#include <stdio.h>
#include <stdlib.h>


int main()
{
	int *p; 
	p = (int*)malloc(2*sizeof(int));
	
	*p = 11;
	printf("The element allocated is %d \n",*p);
	
	p++;
	
	*p = 7;
	printf("The element allocated is %d \n",*p);
		
	return 0;
}
