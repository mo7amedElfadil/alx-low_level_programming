#include "main.h"
#include <stdlib.h>

/**
 * word_matrix - generates a matrix of words from a given string of sentences.
 * @str: input string
 * Return: Pointer to pointer to pointer of matrix (3D matrix)
 */

char ***word_matrix(char *str)
{
	char ***m_ptr = NULL, **s_ptr = NULL, *w_ptr = NULL;
	int i, j, m_l, s_l;

	m_l = count_sentences(str);


	m_ptr = (char ***)malloc(m_l * sizeof(char **));

	i = 0;
	while (i < m_l)
	{
		s_ptr = extract_sentence(str);
		s_l = len_sentence(str);
		m_ptr[i] = (char **)malloc(s_l * sizeof(char *));
		j = 0;
		while (j < s_l)
		{
			w_ptr = extract_word(s_ptr);

		_strncat(m_ptr[i], s_ptr, s_l);

		}


	}
	return (m_ptr);

}



char **extract_sentence(char *str)
{
	int i = 0,  l = 0;
	char **sentence;

	l = len_sentence(str);

	sentence = (char **)malloc(l * sizeof(*str));

	while (i < l)
	{
		_strncat(sentence[i],extract_word(str), len_word(str));
		i++;
		str += len_word(str);

	}
	return (sentence);
}

/**
 * _strncat - function that concatenates two strings
 *			by appending the n bytes from src string to the dest string,
 *			overwriting the terminating null byte (\0)
 *			at the end of dest, and then adds a terminating
 *			null byte unless src contains n or more bytes
 * @src: pointer to the source string.
 * @dest: pointer to the destination string.
 * @n: number of bytes taken from src
 * Return: the pointer to destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0, m = 0;

	while (*(dest + l) != '\0')
	{
		l++;
	}
	while (m < n && *(src + m) != '\0')
	{
		*(dest + l + m) = *(src + m);
		m++;
	}
	return (dest);
}

char *extract_word(char *str)
{
	int i = 0, j = 0, l = 0;
	char *word;
	for (; *str && *str == ' '; str++)
	{
	}


	while (str[l] != ' ' && str[l] != '\0')
	{
		l++;
	}

	word = (char *)malloc(l * sizeof(char));

	while (i < l)
	{
		word[i] = str[j];
		j+=1;
		i++;
	}
	word[i] = '\0';
	return (word);
}



int len_sentence(char *str)
{
	int i, l, n = 0;
	char l_char;

	l = len_word(str);
	l_char = str[0];
	for (i = 0; i <= l; i++)
	{
		if ((str[i] == ' ' || str[i] == '\0') && l_char != ' ')
		{
			n++;
		}
		l_char = str[i];
	}
	return (n);
}

int len_word(char *str)
{
	if (!(*str))
	    return (0);

	return (1 + len_word(str + 1));
}

int count_sentences(char *str)
{
    int count = 0, l = 0;

    while (str[l])
	{
	    if (str[l] == '.' || str[l] == '?' || str[l] == '!' || !str[l+1])
		    count++;

	    l++;
	}
   return (count);

}
