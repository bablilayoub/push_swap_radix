/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:05:46 by abablil           #+#    #+#             */
/*   Updated: 2024/01/12 16:46:31 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_swap **stack)
{
	t_swap	*temp_a;
	t_swap	*temp_b;

	if (!stack || !(*stack)->next)
		return ;
	temp_a = *stack;
	temp_b = (*stack)->next;
	temp_b->prev = NULL;
	temp_a->next = temp_b->next;
	temp_a->next->prev = temp_a;
	temp_b->next = temp_a;
	*stack = temp_b;
}

void	push(t_swap **stack_a, t_swap **stack_b)
{
	t_swap	*temp_list;

	if (!stack_a || !stack_b || !*stack_a)
		return ;
	temp_list = *stack_a;
	*stack_a = (*stack_a)->next;
	temp_list->next = NULL;
	temp_list->prev = NULL;
	push_front(stack_b, temp_list);
}

void	rotate(t_swap **stack)
{
	t_swap	*temp_list;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	temp_list = *stack;
	*stack = (*stack)->next;
	temp_list->next = NULL;
	temp_list->prev = NULL;
	push_back(stack, temp_list);
}

void	reverse_rotate(t_swap **stack)
{
	t_swap	*last_list;
	t_swap	*first;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last_list = get_last_list(*stack);
	*stack = last_list;
	last_list->prev->next = NULL;
	last_list->prev = NULL;
	last_list->next = first;
	first->prev = last_list;
	first->next = NULL;
}
