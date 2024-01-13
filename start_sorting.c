/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:46:02 by abablil           #+#    #+#             */
/*   Updated: 2024/01/13 20:12:13 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_two(t_swap **stack)
{
	if (!stack || !*stack)
		return ;
	if ((*stack)->value > (*stack)->next->value)
		swap_a(stack);
}

void	handle_three(t_swap **stack)
{
	int	top;
	int	middle;
	int	bottom;

	if (!stack || !(*stack))
		return ;
	top = (*stack)->value;
	middle = (*stack)->next->value;
	bottom = (*stack)->next->next->value;
	if (top > middle && middle < bottom && top < bottom)
		swap_a(stack);
	else if (top > middle && middle > bottom)
	{
		swap_a(stack);
		reverse_rotate_a(stack);
	}
	else if (top > middle && middle < bottom && top > bottom)
		rotate_a(stack);
	else if (top < middle && middle > bottom && top < bottom)
	{
		swap_a(stack);
		rotate_a(stack);
	}
	else if (top < middle && middle > bottom && top > bottom)
		reverse_rotate_a(stack);
}

void	handle_four(t_swap **stack_a, t_swap **stack_b)
{
	int	min_index;
	int	stack_size;

	if (!stack_a || !*stack_a)
		return ;
	stack_size = list_size(*stack_a);
	min_index = get_min_index(*stack_a);
	while ((*stack_a)->index != min_index)
		rotate_a(stack_a);
	push_b(stack_a, stack_b);
	handle_three(stack_a);
	push_a(stack_a, stack_b);
}

void	handle_five(t_swap **stack_a, t_swap **stack_b)
{
	int	min_index;
	int	stack_size;

	if (!stack_a || !*stack_a)
		return ;
	stack_size = list_size(*stack_a);
	min_index = get_min_index(*stack_a);
	while ((*stack_a)->index != min_index)
		rotate_a(stack_a);
	push_b(stack_a, stack_b);
	handle_four(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

void	start_sorting(t_swap **stack_a, t_swap **stack_b)
{
	int	stack_size;

	if (!stack_a || !*stack_a)
		return ;
	if (is_sorted(stack_a))
		return ;
	stack_size = list_size(*stack_a);
	if (stack_size == 2)
		handle_two(stack_a);
	else if (stack_size == 3)
		handle_three(stack_a);
	else if (stack_size == 4)
		handle_four(stack_a, stack_b);
	else if (stack_size == 5)
		handle_five(stack_a, stack_b);
	else
		sort_stack(stack_a, stack_b);
	free_list(*stack_a);
}
