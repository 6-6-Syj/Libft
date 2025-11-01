/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:20:56 by jmagand           #+#    #+#             */
/*   Updated: 2025/11/01 20:53:54 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdbool.h>

static size_t	count_words(const char *str, char c)
{
	size_t	words;
	bool	in_word;

	words = 0;
	in_word = false;
	if (!str)
		return (0);
	while (*str)
	{
		if ((*str == c))
			in_word = false;
		if ((*str != c) && !in_word)
		{
			words++;
			in_word = true;
		}
		str++;
	}
	return (words);
}

static size_t	len_to_next_delimiter(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	return (i);
}

static void	*free_tab(char **str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(const char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**dst;

	i = 0;
	j = 0;
	dst = ft_calloc(count_words(str, c) + 1, sizeof(char *));
	if (!dst)
		return (NULL);
	while (str[j])
	{
		while (str[j] == c)
			j++;
		if (str[j] && (str[j] != c))
		{
			len = len_to_next_delimiter(&str[j], c);
			dst[i] = ft_strndup(&str[j], len);
			if (!dst[i])
				return (free_tab(dst, i));
			j += len;
			i++;
		}
	}
	return (dst);
}
