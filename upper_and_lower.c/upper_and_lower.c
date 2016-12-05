/**
*	upper_and_lower.c
*	author: aaaddress1
**/

#include <stdio.h>
#define lower(s) for(char *p =s; *p; *p^= 0x20& -(!((*p-'A')>>31) & !(('Z'-*p)>>31)), p++)
#define upper(s) for(char *p =s; *p; *p^= 0x20& -(!((*p-'a')>>31) & !(('z'-*p)>>31)), p++)

int main(void)
{
	char str[] = "PPAP: Pen Pineapple Apple Pen.";
	printf("String\t=> %s\n", str);

	lower(str);
	printf("Lower\t=> %s\n", str);

	upper(str);
	printf("Upper\t=> %s\n", str);
	return 0;
}
