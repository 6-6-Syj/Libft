/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_extend.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:07:47 by jmagand           #+#    #+#             */
/*   Updated: 2025/11/01 21:30:29 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_pf(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr_pf(char *str, int fd)
{
	if (str == NULL)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	write(fd, str, ft_strlen(str));
	return (ft_strlen(str));
}

int	ft_putnbr_hex(unsigned int nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr >= (unsigned int) base_len(base))
		count += ft_putnbr_hex(nbr / base_len(base), base);
	count += write(1, &base[nbr % base_len(base)], 1);
	return (count);
}

int	ft_putadress(void *nbr, char *base)
{
	int					count;
	unsigned long long	res;

	count = 0;
	res = (unsigned long long) nbr;
	if (nbr == 0)
		return (ft_putstr_pf("(nil)", 1));
	count += ft_putstr_pf("0x", 1);
	count += ft_putnbr_base_ul(res, base);
	return (count);
}
