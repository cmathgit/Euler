# makefile for hello
# to compile the hello.c file into an executable
# gcc hello.c -o hello.exe
# to run the executable
# ./hello.exe 42 10

# Rule to compile the hello.c file into an executable
hello: hello.o
	gcc hello.o -o hello.exe

# Rule to compile hello.c into an object file
hello.o: hello.c
	gcc -c hello.c

# Pseudo-target to remove object code and executable files
# to make the clean target, run the command "make clean"
clean:
	-rm *.o hello.exe