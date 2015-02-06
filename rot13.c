#include <stdio.h>

char *str = "nopqrstuvwxyzabcdefghijklm";

char chtoi(char c);
int len(char *);

int main()
{
	int i = 0;
	char cod;
	char *texto = "Texto a ser criptografado";
	int n = len(texto);

	while(n--)
	{
		cod = chtoi(texto[i++]);
		if (cod < 26)
			printf("%c", str[cod]);
	}
	printf("\n");

	return 0;
}

char chtoi(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c - 'A';
	else if (c >= 'a' && c <= 'z')
		return c - 'a';
	return c;
}

int len(char *str)
{
	int n = 0;
	while(str[n++] != '\0') {}
	return n - 1;
}
