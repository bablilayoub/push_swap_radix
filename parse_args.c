/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:06:15 by abablil           #+#    #+#             */
/*   Updated: 2024/01/13 15:03:22 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(t_swap *stack_a, char **args, int value, int allocated)
{
	t_swap	*temp;

	temp = stack_a;
	while (temp)
	{
		if (temp->value == value)
		{
			if (allocated)
				free_args(args);
			free_list(stack_a);
			send_error();
		}
		temp = temp->next;
	}
}

void	found_sign(char *number, size_t *i, int *sign)
{
	if (number[*i] == '-' || number[*i] == '+')
	{
		if (number[*i] == '-')
			*sign = -1;
		(*i)++;
	}
}

int	is_valid_number(char *number)
{
	size_t	i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	if (!number[i])
		return (0);
	found_sign(number, &i, &sign);
	while (number[i])
	{
		if (!ft_isdigit(number[i]))
			return (0);
		if (number[i] >= '0' && number[i] <= '9')
			result = result * 10 + (number[i] - '0');
		i++;
	}
	result *= sign;
	if (ft_strlen(number) != i || result < INT_MIN || result > INT_MAX)
		return (0);
	return (1);
}

void	handle_args(char **args, int i, int allocated)
{
	while (args[i])
	{
		if (!is_valid_number(args[i]))
		{
			if (allocated)
				free_args(args);
			send_error();
		}
		i++;
	}
}

void	prepare_stack(t_swap **stack_a, char **args, int i, int allocated)
{
	t_swap	*new_node;

	while (args[i])
	{
		check_duplicates(*stack_a, args, ft_atoi(args[i]), allocated);
		new_node = new_list(ft_atoi(args[i]));
		if (!new_node)
		{
			if (allocated && args)
				free_args(args);
			free_list(*stack_a);
			send_error();
		}
		new_node->index = -1;
		push_back(stack_a, new_node);
		i++;
	}
	if (allocated && args)
		free_args(args);
	while (!all_indexed(*stack_a))
		set_index(*stack_a);
}
