/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:34:53 by abablil           #+#    #+#             */
/*   Updated: 2024/01/12 16:37:06 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_index(t_swap *stack)
{
	int		min_index;
	t_swap	*temp_list;

	if (!stack)
		return (0);
	temp_list = stack;
	min_index = temp_list->index;
	while (temp_list)
	{
		if (temp_list->index < min_index)
			min_index = temp_list->index;
		temp_list = temp_list->next;
	}
	return (min_index);
}

int	is_sorted(t_swap **stack)
{
	t_swap	*temp_list;

	if (!stack || !*stack)
		return (0);
	temp_list = *stack;
	while (temp_list->next)
	{
		if (temp_list->index > temp_list->next->index)
			return (0);
		temp_list = temp_list->next;
	}
	return (1);
}

t_swap	*get_last_list(t_swap *list)
{
	t_swap	*temp_list;

	if (!list)
		return (NULL);
	temp_list = list;
	while (temp_list->next)
		temp_list = temp_list->next;
	return (temp_list);
}

void	free_list(t_swap *stack)
{
	t_swap	*temp;
	t_swap	*head;

	if (!stack)
		return ;
	head = stack;
	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
		if (stack == head)
			break ;
	}
}

void	sort_stack(t_swap **stack_a, t_swap **stack_b)
{
	int	i;
	int	j;
	int	stack_size;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	i = 0;
	stack_size = list_size(*stack_a);
	while (!is_sorted(stack_a))
	{
		j = 0;
		while (*stack_a && j < stack_size && !is_sorted(stack_a))
		{
			if (((*stack_a)->index >> i) & 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		i++;
		while (*stack_b)
			push_a(stack_a, stack_b);
	}
}
