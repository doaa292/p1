/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domansou <domansou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 13:54:30 by domansou          #+#    #+#             */
/*   Updated: 2026/01/03 10:45:17 by domansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*copy_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_result(char **result, int words)
{
	while (words--)
		free(result[words]);
	free(result);
}

static int	fill_result(char **result, char const *s, char c)
{
	int	i;
	int	start;
	int	word;

	i = 0;
	start = -1;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			result[word] = copy_word(s, start, i + (s[i] != c));
			if (!result[word])
				return (free_result(result, word), -1);
			word++;
			start = -1;
		}
		i++;
	}
	result[word] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (fill_result(result, s, c) == -1)
		return (NULL);
	return (result);
}
