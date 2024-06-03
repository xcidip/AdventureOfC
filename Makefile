# Define the compiler
CC = gcc

# Define the output file name (executable)
TARGET = aoc

# Define all source files (.c)
SRCS = main.c

# Define all object files (.o)
OBJS = $(SRCS:.c=.o)

# Define compiler flags (feel free to add optimization flags)
CFLAGS = -Wall

# Main rule - builds the executable
all: $(TARGET)

# Rule to compile a source file to an object file
$(OBJS): $(SRCS)
    $(CC) $(CFLAGS) -c $< -o $@

# Rule to link object files into the executable
$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

# Phony clean target to remove object files
clean:
    rm -f $(OBJS)


