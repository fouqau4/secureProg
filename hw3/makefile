all : hw3 getsp

m_hw3 : m_hw3.o
	gcc -m32 -zexecstack -fno-stack-protector -o m_hw3_exe m_hw3.c
m_hw3.o : m_hw3.c
	gcc -c m_hw3.c

hw3 : 
	gcc -m32 -zexecstack -fno-stack-protector -o hw3_exe hw3.c


getsp : getsp.o
	gcc -o getsp getsp.o
getsp.o : getsp.c
	gcc -c getsp.c
clean :
	rm -f *.o hw3_exe shellcode getsp m_hw3_exe
