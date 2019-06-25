#include <stdio.h>

int main()
{
	char c[] = "EFAFA?AEABF";
	for (int i = 0;i <= 11; i++)
		printf("%c", c[i] - 13);
}
