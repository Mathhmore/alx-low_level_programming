#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	ssize_t n = 114;
	FILE *fp;
	char buff;
	int i = 0;

	fp = fopen("Requiescat", "r");
	while (i < n)
	{
		buff = fgetc(fp);
		printf("%c", buff);
		i++;
	}
	printf("\n");
	fclose(fp);
}
