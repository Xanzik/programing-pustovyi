#include <iostream>
#include <stdlib.h>
using namespace std;

int func(int x);
int main() {
    int y = rand();
    y = func(y);

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

/*char function(char x[]);
int main() {
    int words;
    char text[] = {'I', ' ', 'c', 'a', 'n', ' ', 'f', 'i', 'g', 'h', 't'};
    words = function(text);
    return 0;
}

char function(char x[]) {
    int words = 1;
    int limit = 255;
    for(int i = 1; i < limit; i++) {
        if(x[i] == ' ')
        if(x[i + 1] != ' ')
            words ++;
    }
    return words;
} */
