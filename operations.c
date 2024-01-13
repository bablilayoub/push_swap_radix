/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 21:47:19 by abablil           #+#    #+#             */
/*   Updated: 2024/01/12 16:43:15 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_swap **stack_a)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	swap(stack_a);
	ft_printf("sa\n");
}

void	swap_b(t_swap **stack_b)
{
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	swap(stack_b);
	ft_printf("sb\n");
}

void	swap_a_and_b(t_swap **stack_a, t_swap **stack_b)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next
		|| !stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

void	push_a(t_swap **stack_a, t_swap **stack_b)
{
	if (!stack_b || !*stack_b || !stack_a)
		return ;
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	push_b(t_swap **stack_a, t_swap **stack_b)
{
	if (!stack_a || !*stack_a || !stack_b)
		return ;
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
