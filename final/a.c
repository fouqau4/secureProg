#include <stdio.h>

void vulnerable_function() 
{
	char buffer[100];
    gets(buffer);
}

int main( int argc, char* argv[] )
{
    puts("Hello Hacker!");
    fflush(stdout);
	vulnerable_function();
	return 0;
}
