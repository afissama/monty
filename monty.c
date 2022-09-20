#include "monty.h"
/**
 * main - Entry function
 *
 * @argc: nb of arguments
 * @argv: arguments
 * Return: int
 */
int main(int argc, char const *argv[])
{
	FILE *fd;
	char line[500];
	unsigned int nbline;
	char *words[2];
	stack_t *stack;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	stack = NULL;
	fd = fopen(argv[1], "r");
	nbline = 0;
	while (fgets(line, sizeof(line), fd))
	{
		nbline++;
		line[strcspn(line, "\n")] = 0;
		getwords(line, words, 2);
		if (words[0])
			monty(&stack, words[0], words[1], nbline);
	}
	fclose(fd);
	return (0);
}

/**
 * getwords - get words from line
 *
 * @line: the line
 * @words: words
 * @maxwords: default value  2
 * Return: char**
 */
char **getwords(char *line, char *words[], int maxwords)
{
	char *p = line;
	int nwords;

	nwords = 0;
	words[0] = NULL;
	words[1] = NULL;
	if (line == NULL)
		return (NULL);

	while (1)
	{
		while (*p == ' ')
			p++;
		if (*p == '\0')
		{
			return (words);
		}
		words[nwords++] = p;
		while (*p != ' ' && *p != '\0')
			p++;
		if (*p == '\0')
			return (words);

		*p++ = '\0';
		if (nwords >= maxwords)
			return (words);
	}
}
