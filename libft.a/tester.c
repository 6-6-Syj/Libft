/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-07 08:00:07 by jmagand           #+#    #+#             */
/*   Updated: 2024-11-07 08:00:07 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

// int	main()
// {
//     printf(ft_bzero("Yoooo", 2));
//     printf(bzero("Yoooo", 2));
// 	return(0);
// }

int	main()
{
    printf("%i", (ft_isalnum('g')));
    printf("%i", (isalnum('g')));

    printf("%i", (ft_isalnum(0)));
    printf("%i", (isalnum(0)));
	return (0);
}