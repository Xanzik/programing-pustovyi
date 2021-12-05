// Визначити, чи є задане ціле число простим.
int main()
{
    int x = 13;
    for(int i = 2; i < x; i++)
        if (x % i != 0)
		continue;
	else {
		x = 1;
	}

    return 0;
}
