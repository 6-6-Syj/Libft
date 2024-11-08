/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-07 07:54:21 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-07 07:54:21 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	size;
	char	*str2;

	str2 = (char *) str;
	size = ft_strlen(str2);
	while(size != 0)
	{
		if(str2[size] == c)
			return(&str2[size]);
		size--;
	}
	return (NULL);
}
