/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-12 17:08:23 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-12 17:08:23 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t  i;
    size_t  *arr;

    i = 0;
    arr = malloc(nmemb * size);
    if (size == 0 || nmemb == 0)
        return (NULL);
    if (arr == NULL)
        return (NULL);
    while (i < nmemb * size)
    {
        arr[i] = '\0';
        i++;
    }
    return (arr);
    free (arr);
}
