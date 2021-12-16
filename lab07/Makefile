CC = clang
LAB_OPTS = -I./src
C_OPTS = -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-variable -Werror=vla $(LAB_OPTS)

Makefile:
clean:
	rm -rf dist
prep:
	mkdir dist
compile:
	gcc -g src/main.c -o ./dist/main.bin
run:
	./dist/main.bin
all: 
	make clean prep compile run
