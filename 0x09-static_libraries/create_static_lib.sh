#!/bin/bash

# Gather all .c files in the current directory
files=$(ls *.c)

# Compile each .c file into an object file
for file in $files
do
    gcc -c $file
done

# Create a static library from all the generated object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm -f *.o
