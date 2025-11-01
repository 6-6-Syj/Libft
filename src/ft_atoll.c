/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:56:22 by jmagand           #+#    #+#             */
/*   Updated: 2025/11/01 20:00:01 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(char *str)
{
	int			i;
	int			neg;
	long long	out;

	out = 0;
	i = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		out *= 10;
		out += str[i] - 48;
		i++;
	}
	out *= neg;
	return (out);
}
