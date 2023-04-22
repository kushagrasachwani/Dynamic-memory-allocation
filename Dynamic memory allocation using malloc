#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	// This  pointer will hold the base address of the block created
	int* ptr;
	int n, i;
	
	// Get the number of the elements for the array
	printf("Enter number of Elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n",n);
	 
	// Dynamically allocate memory using malloc()
	ptr=(int*)malloc(n*sizeof (int));

    // Check if the memory has been successfully allocated by malloc or not
    
    
    if(ptr==NULL)
    {
    	printf("Memory not allocated\n");
    	exit(0);
	}
	else
	{
		//Memory has been succesfully allocated
		printf("Memory successfully allocated using malloc() function\n");
	}
	
	// Get the elements of the array
	for(i=0;i<n;++i)
	{
		ptr[i]=i+1;
	}
	
	// Print the elememts of the array
	printf("The elements of the array are:-\n");
	for(i=0;i<n;++i)
	{
		printf("%d",ptr[i]);
	}
return 0;
	
}
