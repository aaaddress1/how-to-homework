/**
*	sort-three-integer.c
*	author: inndy, aaaddress1
**/
#include <stdio.h>

int main(void)
{
	int a = 3, b = 7, c = 1;
	int arr[3] = {0};

	(-(!(a-((a+b+c)/3))|(2&((a-((a+b+c)/3))>>31)))+2)[arr] = a;
	(-(!(b-((a+b+c)/3))|(2&((b-((a+b+c)/3))>>31)))+2)[arr] = b;
	(-(!(c-((a+b+c)/3))|(2&((c-((a+b+c)/3))>>31)))+2)[arr] = c;
	printf("%i %i %i\n", arr[0],arr[1],arr[2]);

}
