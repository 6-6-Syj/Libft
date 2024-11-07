/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-07 07:54:01 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-07 07:54:01 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char	*dest1;
	char	*src1;

	i = 0;
	dest1 = dest;
	src1 = src;
	while(i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return(dest1);
}