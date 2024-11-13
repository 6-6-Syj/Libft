/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-12 18:00:22 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-12 18:00:22 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *temp_s;
    size_t  i;

    if (s == NULL || ft_strlen(s) < start)
        return (NULL);
    if (ft_strlen(s + start) < len)
        len = ft_strlen(s + start);
    temp_s = ft_calloc(len + 1, sizeof(char));
    if (temp_s == NULL)
        return (NULL);
    while (i < len)
    {
        temp_s[i] = s[start + i];
        i++;
    }
    return (temp_s);
    free(temp_s);
}