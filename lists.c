/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:38:07 by abablil           #+#    #+#             */
/*   Updated: 2024/01/13 15:04:32 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap	*new_list(int value)
{
	t_swap	*new_list;

	new_list = (t_swap *)malloc(sizeof(t_swap));
	if (!new_list)
		return (NULL);
	new_list->value = value;
	new_list->next = NULL;
	new_list->prev = NULL;
	return (new_list);
}

void	push_front(t_swap **stack, t_swap *new_node)
{
	if (stack && new_node)
	{
		if (*stack)
		{
			new_node->next = *stack;
			new_node->prev = NULL;
			(*stack)->prev = new_node;
		}
		*stack = new_node;
	}
}

void	push_back(t_swap **stack, t_swap *new_node)
{
	t_swap	*last_list;

	if (stack)
	{
		if (*stack)
		{
			last_list = get_last_list(*stack);
			last_list->next = new_node;
			new_node->prev = last_list;
			new_node->next = NULL;
		}
		else
			*stack = new_node;
	}
}

int	list_size(t_swap *stack)
{
	int		i;
	t_swap	*temp_list;

	if (!stack)
		return (0);
	i = 0;
	temp_list = stack;
	while (temp_list)
	{
		i++;
		if (temp_list->next == stack)
			break ;
		temp_list = temp_list->next;
	}
	return (i);
}

int	get_min_value(t_swap *stack)
{
	t_swap	*temp_list;
	int		min_value;

	if (!stack)
		return (0);
	temp_list = stack;
	min_value = temp_list->value;
	while (temp_list)
	{
		if (temp_list->value < min_value)
			min_value = temp_list->value;
		temp_list = temp_list->next;
	}
	return (min_value);
}
