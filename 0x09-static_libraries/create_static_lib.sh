#!/bin/bash
# Compile all the .c files in the current directory
gcc -c *.c

# Create the library archive file using the ar command
ar rcs liball.a *.o

echo "Static library liball.a created successfully!"
