/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-07 07:54:03 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-07 07:54:03 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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

int	main()
{
	ft_memmove("Saluuuut", "Bonsoir", 4);
	return(0);
}
