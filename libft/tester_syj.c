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
    // ft_isalnum
    printf("ft_isalnum " "%i\n", ft_isalnum('g'));
    printf("V " "%i\n", isalnum('g'));

    printf("ft_isalnum " "%i\n", ft_isalnum(54));
    printf("V " "%i\n", isalnum(54));

    printf("ft_isalnum " "%i\n", ft_isalnum('%'));
    printf("V " "%i\n\n", isalnum('%'));

    // ft_isalpha
    printf("ft_isalpha " "%i\n", ft_isalpha('g'));
    printf("V " "%i\n", isalpha('g'));

    printf("ft_isalpha " "%i\n", ft_isalpha(2));
    printf("V " "%i\n", isalpha(2));

    printf("ft_isalpha " "%i\n", ft_isalpha('%'));
    printf("V " "%i\n\n", isalpha('%'));

    // ft_isdigit
    printf("ft_isdigit " "%i\n", ft_isdigit('g'));
    printf("V " "%i\n", isdigit('g'));

    printf("ft_isdigit " "%i\n", ft_isdigit(50));
    printf("V " "%i\n", isdigit(50));

    printf("ft_isdigit " "%i\n", ft_isdigit(10));
    printf("V " "%i\n\n", isdigit(10));

    // ft_isascii
    printf("ft_isascii " "%i\n", ft_isascii('g'));
    printf("V " "%i\n", isascii('g'));

    printf("ft_isascii " "%i\n", ft_isascii(0x80));
    printf("V " "%i\n\n", isascii(0x80));

    // ft_isprint
    printf("ft_isprint " "%i\n", ft_isprint('g'));
    printf("V " "%i\n", isprint('g'));

    printf("ft_isprint " "%i\n", ft_isprint(01));
    printf("V " "%i\n\n", isprint(01));

    // ft_strlen
    printf("ft_strlen " "%lu\n", ft_strlen("combien ?"));
    printf("V " "%lu\n", strlen("combien ?"));

    printf("ft_strlen " "%lu\n", ft_strlen(""));
    printf("V " "%lu\n\n", strlen(""));

    // ft_memcpy
    // XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    // printf("ft_memcpy " "%s\n", ft_memcpy("Salut,  les gars", "Bonjour", 7));
    // printf("V " "%s\n\n", memcpy("Salut,  les gars", "Bonjour", 7));

    // printf("ft_memcpy " "%i\n", ft_memcpy("Salut,  les gars", "Bonjour", 0));
    // printf("V " "%s\n\n", memcpy("Salut,  les gars", "Bonjour", 0));

    // printf("ft_memcpy " "%i\n", ft_memcpy("Salut", "Bonjourerferf", 50));
    // printf("V " "%s\n", memcpy("Salut,  les gars", "Bonjourerferf", 50));
    // --------------------------------------------------------

    // ft_memset
    // unsigned char s[] = "Yo mec bene";
    // ft_memset(s, 10, 7);
    
    // int i = 0;
    // while(s[i] != '\0')
    // {
    //   printf("%d\n", s[i]);
    //   i++;
    // }

    // ft_bzero
    // unsigned char s[] = "Yo mec bene";
    // ft_bzero(s, 5);
    
    // int i = 0;
    // while(s[i] != '\0')
    // {
    //   printf("%d\n", s[i]);
    //   i++;
    // }

    // ft_memmove
    // 	ft_memmove("Saluuuut", "Bonsoir", 4);
    // 	return(0);

	return (0);
}