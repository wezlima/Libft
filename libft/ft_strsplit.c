/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 14:35:23 by woliveir          #+#    #+#             */
/*   Updated: 2016/10/20 02:18:52 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		word_count(char const *s, char c)
{
	unsigned int		n_words;
	size_t				i;
	int					word;

	n_words = 0;
	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && word == 1)
			word = 0;
		if (s[i] != c && word == 0)
		{
			word = 1;
			n_words++;
		}
		i++;
	}
	return (n_words);
}

static size_t			letter_count(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char				**fill(char **res, unsigned int n_words,
		char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	position;
	size_t	word_len;

	i = 0;
	position = 0;
	while (i < n_words)
	{
		j = 0;
		if ((word_len = letter_count(&s[position], c)) != 0)
		{
			if (!(res[i] = (char *)malloc(sizeof(char) * (word_len + 1))))
				return (NULL);
			while (j < word_len)
				res[i][j++] = s[position++];
			res[i++][j] = '\0';
		}
		else
			position++;
	}
	res[i] = 0;
	return (res);
}

char					**ft_strsplit(char const *s, char c)
{
	char			**res;
	unsigned int	n_words;

	if (!s)
		return (NULL);
	n_words = word_count(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (n_words + 1))))
		return (NULL);
	return (fill(res, n_words, s, c));
}
