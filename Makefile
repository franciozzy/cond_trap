all:
	gcc -o stub.so -shared stub.c -ldl -lpthread -fPIC
	gcc -o prog prog.c -lpthread

run:
	LD_PRELOAD=./stub.so /usr/bin/valgrind ./prog
