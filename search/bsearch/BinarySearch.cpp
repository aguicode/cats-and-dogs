#include <stdlib.h> 
#include <stdio.h>

/*
*	binary search  use recursion  method
*/
int 	BSearch(int* dataArr, int left , int right, int  key)
{
		
	int mid= ( left + right )/2;
	if( key == dataArr[mid])
		return 1;
	if(left >= right)
		return 0;	
	else if (key < dataArr[mid])
		return BSearch(dataArr, left, mid, key);
	else if ( key > dataArr[mid])
		return  BSearch(dataArr, mid+1 , right, key);

	return 0;
}


int main(int argc, char ** argv)
{
	if(argc != 2)
	{
		printf("Usage:./a.out  key\n");
		exit(0);
	}

	int key= atoi(argv[1]);

	int data[10] = {0,3,4,10,63,63,63,67,88};

	if(BSearch(data, 0, 10, key) >0)
		printf("find\n");
	else 
		printf("not found\n");	
	return 0;
}
