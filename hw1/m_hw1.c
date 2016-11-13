#include <stdio.h>
#include <string.h>

int UPtest(char *, char *, char * );
void myprivatetest(void);

int main(int argc, char**argv){
    if(UPtest(argv[1], argv[2], argv[3])){
     printf("Access granted...\n");
    } else {
     printf("Wrong username and password!!!!\n");
    }
    return 0;
}

int UPtest(char *a1 , char *a2, char *a3){

    char Uid[27], Uname[25], Upass[70];
    strncpy(Uid, a1, sizeof( Uid ) - 1 );
    strncpy(Uname, a2, sizeof( Uname ) - 1);
    strncpy(Upass, a3, sizeof( Upass ) - 1);

    if(!strncmp(Uname, "Admin", 5 ) && !strncmp(Upass, "PassAd009", 9 ))
        return 1;
    else
        return 0;
}

#ifdef _TEST_
void myprivatetest(){
    printf("This is test code to run other system program.\n");
    system("/usr/bin/xeyes");
}
#endif
