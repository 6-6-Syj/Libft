/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-13 12:51:07 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-13 12:51:07 by jmagand          ###   ########.fr       */
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

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t      start;
    size_t      end;
    size_t      i;
    char        *temp_s;

    end = (ft_strlen(s1) - 1);
    i = 0;
    while (compare((char *)set, s1[start]))
        start++;
    while (compare((char *)set, s1[end]))
        end--;
    temp_s = malloc((ft_strlen(s1)) * sizeof(char) + 1);
    if (temp_s == NULL)
        return (NULL);
    while (temp_s[i] != '\0')
    {
        temp_s[i] = s1[start + i];
        i++;
    }
    temp_s[i] = '\0';
    return (temp_s);
}
