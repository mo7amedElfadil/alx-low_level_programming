#include "main.h"


/*
 * strtow -    split string into words
 * @str - input pointer to string
 * Return: pointer to a pointer to a word
 */


/*
 *	split a string into words
 *	each element + 1 word, null terminated
 *	last element must be null
 *	how do we determine a word? seperated by spaces
 *
 *	failure conditions: str == NULL or str == "" (i.e len(str) == 0)
 *						if function fail: malloc returns NULL
 *						Return NULL
 *	what do we need to do:
 *		     create    a function for:
 *			counting  words
 *			splitting words
 *			len of words	= done
 */
int str_len(char *str)
{
	if(!*str)
		return (0);
	else
		return (1 + str_len(str + 1));
}


int count_words(char *str)
{
	int count = 0;

	for (;*str; str++)
	{
		if (*str == ' ')
		{
			continue;
		}

		if (*(str + 1) == ' ' || !*(str + 1))
		{
			count++;
		}
	}
	return (count);
}

char *extract_word(char *str)
{
	int i, x = 0, len_word = 0;
	char *word;

	for (; *str; str++)
	{
		if(*str != ' ')
		{
			len_word++;
			if (*(str+ 1) == ' ' || !*(str + 1))
			{
				if (*(str + 1) == ' ')
					str++;
				break;
			}
		}
	}

	word = malloc(sizeof(char) * len_word + 1);
	for (i = 0; len_word > 0; i++, --len_word)
		word[i] = *(str - len_word);
	word[i] = '\0';

	return (word);
}

char **strtow(char *str)
{
	char **ptr = NULL, *word = NULL;
	int i, j, nw, size, word_len;

	size = str_len(str);
	nw = count_words(str);

	if (size == 0 || !str || nw == 0)
		return (NULL);
	ptr = (char **)malloc(sizeof(*ptr) * (nw + 1));
	if (!ptr)
		return (NULL);

	for (i = 0 ; i < nw; i++)
	{
		for ( ; *str && *str == ' '; str++)
		{
		}
		word = extract_word(str);
		word_len = str_len(word);
		str += word_len;
		ptr[i] = (char *)malloc(sizeof(**ptr) * (word_len + 1));
		if (!ptr[i])
		{
			for (;i >=0;)
				free(ptr[--i]);
		free(ptr);
		return (NULL);
		}
		j = 0;
		while (j < word_len)
		{
			ptr[i][j] = word[j];
			j++;
		}
		free(word);
		ptr[i][j] = 0;
	}
	return (ptr);

}


void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	int i;
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);

	for (i = 0;tab[i]; i++)
	{
		free(tab[i]);
	}
	free(tab);
	return (0);
}

