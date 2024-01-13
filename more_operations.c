/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:41:56 by abablil           #+#    #+#             */
/*   Updated: 2024/01/13 14:52:50 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_swap **stack_a)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rotate_b(t_swap **stack_b)
{
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rotate_a_and_b(t_swap **stack_a, t_swap **stack_b)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next
		|| !stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}

void	reverse_rotate_a(t_swap **stack_a)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_swap **stack_b)
{
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}
