all : hw1 shell getsp

hw1 : hw1.o
	gcc -m32 -zexecstack -fno-stack-protector -o hw1_exe hw1.c
hw1.o : hw1.c
	gcc -c hw1.c

shell : shellcode.o
	gcc -m32 -zexecstack -fno-stack-protector -o shellcode shellcode.c
shellcode.o : shellcode.c
	gcc -c shellcode.c

getsp : getsp.o
	gcc -o getsp getsp.o
getsp.o : getsp.c
	gcc -c getsp.c
clean :
	rm -f *.o hw1_exe shellcode getsp
