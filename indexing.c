/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:38:27 by abablil           #+#    #+#             */
/*   Updated: 2024/01/12 16:40:26 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	all_indexed(t_swap *stack)
{
	t_swap	*temp_list;

	temp_list = stack;
	while (temp_list)
	{
		if (temp_list->index == -1)
			return (0);
		temp_list = temp_list->next;
	}
	return (1);
}

void	set_index(t_swap *stack)
{
	t_swap	*temp_list;
	int		i;
	int		min_value;

	temp_list = stack;
	min_value = get_min_value(stack);
	i = 1;
	while (temp_list)
	{
		if (temp_list->value == min_value)
		{
			temp_list->index = i;
			i++;
			min_value = next_min_value(stack, min_value);
			temp_list = stack;
		}
		else
			temp_list = temp_list->next;
	}
}
