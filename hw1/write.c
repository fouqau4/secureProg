#include <stdio.h>
#include <string.h>
int main( int argc, char *argv[] )
{
	int temp_i, len = strlen( argv[1] ), temp_i1;
	for( temp_i = 0 ; temp_i < len ; temp_i += 2 )
	{
		sscanf( argv[1] + temp_i, "%2x", &temp_i1 );
		printf("%c", temp_i1 );
	}
	return 0;
}
