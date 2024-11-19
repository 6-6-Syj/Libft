/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:51:07 by jmagand           #+#    #+#             */
/*   Updated: 2024/11/19 18:55:22 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int  compare(char *set, char c)
{
    size_t      i;

    i = 0;
    while (set[i] != '\0')
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

static char  *check(const char *s1, size_t start, size_t end)
{
    char        *temp_s;
    size_t      i;
        
    if (end <= 0 || start >= end)
        return (ft_strdup(""));
    temp_s = malloc(end * sizeof(char) + 1);
    if (!temp_s)
        return (NULL);
    i = 0;
    while (i < end)
    {
        temp_s[i] = s1[start + i];
        i++;
    }
    temp_s[i] = '\0';
    return (temp_s);
}

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t      start;
    size_t      end;
    size_t      len;

    len = ft_strlen(s1);
    end = (ft_strlen(s1) - 1);
    start = 0;
    if (len == 0)
        return (ft_strdup(""));
    while (compare((char *)set, s1[start]))
        start++;
    while (compare((char *)set, s1[end]))
        end--;
    return (check(s1, start, end));
}
