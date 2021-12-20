#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int func(int x);
int main(int argc, char *argv[]) {
	int y;
	if(argv[1] != 0) {
		y = atoi(argv[1]);
		y = func(y);
		printf("result = %d\n", y);
	}
	else {
		srand(time(NULL));
		y = 1 + rand() % 100;
		y = func(y);
		printf("result = %d\n", y);
	}
	return 0;
}

int func(int x) {
    for(int i = 2; i < x; i++)
        if(x % i != 0)
            continue;
        else { 
            x = 0;
        }
    return x;
}
/*
char function(char x[]);
int main(int argc, char* argv[]) {
	int words;
	if(argc != 1) {
		words = function(argv);
		words *= argc - 1;
		printf("Words = %d\n", words);
	}
	else {
		char text[] = {' ', 'I', ' ', '.', '.', ' ', 'c', 'a', 'n', ' ', 'f', 'i', 'g', 'h', 't', '!', ' ', '\n'};
		words = function(text);
		printf("Words = %d\n", words);
	}
	return 0;
}
char function(char x[]) {
    int limit = 50;
    int words = 0;
	if(x[0] != ' ') {
		words++;
}
    for(int i = 1; i < limit; i++) {
        if(x[i] == ' ') {
        	if(x[i + 1] != ' ' && x[i + 1] != '\n')
			words ++;
	}
	if(x[i] == '.' && x[i] == '!' && x[i] == ',' && x[i] == '!')
		words--;
       }
    return words;
}
 */
