# Makefile for Eratosthenes Sieve program
# Author: Cruz Macias

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target executable
TARGET = eratosthenes

# Source files
SRCS = eratosthenes.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

# Run rule for convenience
run: $(TARGET)
	./$(TARGET)

# Help target
help:
	@echo "Makefile for Eratosthenes Sieve program"
	@echo "Usage:"
	@echo "  make       - Build the executable"
	@echo "  make clean - Remove object files and executable"
	@echo "  make run   - Build and run the program (requires parameters)"
	@echo "  make help  - Display this help message"

# Phony targets
.PHONY: all clean run help 