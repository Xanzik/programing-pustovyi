int main() {
    int limit = 100;
    int words = 0;
    char text[] = {' ', 'I', ' ', '.', '.', ' ', 'c', 'a', 'n', ' ', 'f', 'i', 'g', 'h', 't', '!', ' ', '\n'};
    for(int i = 1; i < limit; i++) {
    	if(text[0] != ' ') {
		words++;
	}
        if(text[i] == ' ') {
        if(text[i + 1] != ' ' && text[i + 1] != '\n')
		words ++;
	}
	if(text[i] == '.' && text[i] == '!' && text[i] == ',' && text[i] == '!')
	words--;
       }
    return 0;
}

