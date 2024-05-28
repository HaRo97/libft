/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:05:19 by hrochd            #+#    #+#             */
/*   Updated: 2023/12/15 17:41:35 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_words(const char *s, char c)
{
	int	i;
	int	wordscount;

	i = 0;
	wordscount = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			wordscount++;
		i++;
	}
	return (wordscount);
}

static	char	**ft_free(char **words, int j)
{
	while (j)
	{
		free(words[j - 1]);
		j--;
	}
	free(words);
	return (NULL);
}

static	char	**ft_words_alloc(const char *s, char c, char **words)
{
	int	j;
	int	i;
	int	len;

	j = 0;
	i = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			len++;
			i++;
		}
		if (len > 0)
		{
			words[j] = ft_substr(s, (i - len), len);
			if (words[j] == NULL)
				return (ft_free(words, j));
			j++;
		}
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	int		words_count;
	char	**words;

	if (s == NULL)
		return (NULL);
	words_count = ft_words(s, c);
	words = (char **)malloc((words_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[words_count] = NULL;
	words = ft_words_alloc(s, c, words);
	return (words);
}
