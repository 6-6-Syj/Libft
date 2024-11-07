/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-07 07:52:18 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-07 07:52:18 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*temp_s;

	temp_s = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		temp_s[i] = 0;
		i++;
	}
}
