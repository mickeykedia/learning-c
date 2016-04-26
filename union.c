#include <stdio.h>
#include <string.h>

union Data
{
	int i;
	float f;
	char  str[20];
};

int main()
{
	union Data data;        

	data.f = 220.5;
	data.i = 64;
//	strcpy( data.str, "C Programming");

	printf( "data.i : %x\n", data.i);
	printf( "data.f : %f\n", data.f);
	printf( "data.str : %s\n", data.str);

	return 0;
}
