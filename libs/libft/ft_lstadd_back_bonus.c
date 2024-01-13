/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:22:37 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:02:13 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last_list;

	if (lst)
	{
		if (*lst)
		{
			last_list = ft_lstlast(*lst);
			last_list->next = new_node;
		}
		else
			*lst = new_node;
	}
}
