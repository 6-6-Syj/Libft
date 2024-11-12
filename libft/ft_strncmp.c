/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-12 11:16:30 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-12 11:16:30 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return ((unsigned char) s1[i] - s2[i]);
}

// ft_strncmp("abcdef", "abc\375xx", 5): 
// expected sign: -1 (value: -153), yours sign: 1 (value: 103)