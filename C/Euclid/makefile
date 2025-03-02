# Makefile for Euclidean Algorithm C program

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Source files
SRC = euclideanAlgorithm.c

# Executable name
EXEC = euclideanAlgorithm

# Default target
all: $(EXEC)

# Rule to build the executable
$(EXEC): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC)

# Clean target to remove compiled files
clean:
	rm -f $(EXEC)

# Phony targets
.PHONY: all clean