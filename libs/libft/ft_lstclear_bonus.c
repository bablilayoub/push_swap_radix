/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:34:16 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:04:17 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_list;

	if (!lst || !del)
		return ;
	while (lst && *lst)
	{
		temp_list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_list;
	}
}
