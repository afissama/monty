#include "monty.h"

int main(int argc, char const *argv[])
{
	FILE* fd;
	char line[500];
	unsigned int nbline;
	char *token;
	char *token2;

	if (argc != 2)
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	nbline = 0;
	while (fgets(line, sizeof(line), fd))
	{
		nbline++;
		token = strtok(line, " ");
		token2 = strtok(NULL, " ");
		monty(token, token2, nbline);
	}
	
	return 0;
}
