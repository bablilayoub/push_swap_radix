/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:12:01 by abablil           #+#    #+#             */
/*   Updated: 2024/01/13 15:01:02 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	next_min_value(t_swap *stack, int min_value)
{
	t_swap	*temp_list;
	int		next_min_value;

	temp_list = stack;
	next_min_value = INT_MAX;
	while (temp_list)
	{
		if (temp_list->value > min_value && temp_list->value < next_min_value)
			next_min_value = temp_list->value;
		temp_list = temp_list->next;
	}
	return (next_min_value);
}

void	free_args(char **args)
{
	int	i;

	i = 0;
	if (!args)
		return ;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

void	send_error(void)
{
	ft_putstr_fd("Error \n", 2);
	exit(EXIT_FAILURE);
}
