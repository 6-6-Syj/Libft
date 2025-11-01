/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:05:49 by jmagand           #+#    #+#             */
/*   Updated: 2025/11/01 21:17:20 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *new_content)
{
	t_list	*new_node;

	if (!new_content)
		new_content = NULL;
	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = new_content;
	new_node->next = NULL;
	return (new_node);
}
