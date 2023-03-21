# A makefile consists of targets and commands that need to be executed to reach the target.


all: build


build: main_executable_module.o 
	gcc main_executable_module.o -o ..\..\build\main_executable_module

build_with_macro: build_with_macro.o
	gcc main_executable_module_macro.o -o ..\..\build\main_executable_module 

main_executable_module.o: main_executable_module.c
	gcc -c -o main_executable_module.o main_executable_module.c

build_with_macro.o: main_executable_module.c
	gcc -c -o build_with_macro.o main_executable_module.c

#.PHONY:rebuild clean all

rebuild: clean all

clean:
	rm -rf *.o ..\..\build\