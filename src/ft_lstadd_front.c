/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagand <jmagand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:02:30 by jmagand           #+#    #+#             */
/*   Updated: 2025/11/01 20:02:39 by jmagand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	new_node->next = *lst;
	*lst = new_node;
}

/*
int	main(void)
{
	t_list *alst;

	alst = ft_lstnew_node((void *)" les copains");
	ft_lstadd_front(&alst, ft_lstnew_node((void *)"Salut"));
	printf("%s\n", (char *)(alst)->content);
}
*/