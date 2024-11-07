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
#include <ctype.h>
#include "libft.h"

// int	main()
// {
//     printf(ft_bzero("Yoooo", 2));
//     printf(bzero("Yoooo", 2));
// 	return(0);
// }

int	main()
{
    printf("ft " "%i\n", ft_isalnum('g'));
    printf("V " "%i\n\n", isalnum('g'));

    printf("ft " "%i\n", ft_isalnum(2));
    printf("V " "%i\n\n", isalnum(2));

    printf("ft " "%i\n", ft_isalnum('%'));
    printf("V " "%i\n\n", isalnum('%'));
	return (0);
}