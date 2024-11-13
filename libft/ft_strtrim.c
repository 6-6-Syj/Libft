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

static int  compare(char *s1, char *s2)
{
    size_t      i;
    size_t      j;

    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

static int  ft_start()
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (s1[i] != s2[j] || s2[j] != '\0')
    {
        j++;
    }
    return ()
}

static int  ft_end()
{
    
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t      i;
    size_t      j;
    size_t      count;
    char        *temp_s;

    i = 0;
    j = 0;
    count = 0;
    while (s1[i] != '\0')
    {
        if (compare(s1, set))
            count++;
        i++;
    }
    temp_s = malloc((ft_strlen(s1) - count) * sizeof(char) + 1);
    if (temp_s == NULL)
        return (NULL);
}
