/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:08:23 by jmagand           #+#    #+#             */
/*   Updated: 2025/11/01 20:53:11 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buff;

	if (!nmemb || !size)
		return (malloc(0));
	if (SIZE_MAX / nmemb < size)
		return (NULL);
	buff = malloc(size * nmemb);
	if (!buff)
		return (NULL);
	ft_bzero(buff, size * nmemb);
	return (buff);
}
