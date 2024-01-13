/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:05:46 by abablil           #+#    #+#             */
/*   Updated: 2024/01/13 19:39:40 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_swap **stack)
{
	t_swap	*temp_a;
	t_swap	*temp_b;
	t_swap	*temp_c;

	if (!stack || !(*stack)->next)
		return ;
	temp_a = *stack;
	temp_b = (*stack)->next;
	temp_c = (*stack)->next->next;
	*stack = temp_b;
	temp_b->next = temp_a;
	temp_b->prev = NULL;
	temp_a->next = temp_c;
	temp_a->prev = temp_b;
	if (temp_c)
		temp_c->prev = temp_a;
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
	last_list = *stack;
	while (last_list->next)
		last_list = last_list->next;
	first = last_list->prev;
	first->next = NULL;
	last_list->prev = NULL;
	push_front(stack, last_list);
}
