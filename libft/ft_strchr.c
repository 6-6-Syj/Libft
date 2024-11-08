/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-07 07:54:08 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-07 07:54:08 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*str2;

	i = 0;
	str2 = (char *) str;
	while(str2[i] != '\0')
	{
		if(str2[i] == c)
			return(&str2[i]);
		i++;
	}
	return (NULL);
}

