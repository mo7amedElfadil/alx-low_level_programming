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
 *			counting  words = done
 *			splitting words kinda?
 *			len of words	= done
 *
 *
 *
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

char *extract_words(char *str)
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

char **split_words(char **dest, char *str, int n_words)
{
	int i, j, len_word = 0;
	char **ptr = NULL, *word = NULL;

	ptr = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!ptr)
		return (NULL);

	for (i = 0; i < n_words && *str; i++)
	{
		for (; *str ; str++)
		{
			if(*str != ' ')
			{
				word = extract_words((str));
				len_word = str_len(word);

				str += len_word;
				break;

			}
		}

		ptr[i] = (char *)malloc(sizeof(char) * (len_word + 1));

		if (!ptr[i])
		{
			for (;i >= 0 ; )
				free(ptr[--i]);
			free(ptr);
		}
		for (j = 0; len_word > 0; j++, --len_word)
		{
			ptr[i][j] = *(str - len_word);
		}
		ptr[i][j] = '\0';

	}




	return (ptr);
}

char **strtow(char *str)
{
	char **ptr1;

	split_words(ptr1, str, count_words(str));


	return (ptr1);

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
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	free(tab);
	return (0);
}

