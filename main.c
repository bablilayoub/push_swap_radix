/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:09:33 by abablil           #+#    #+#             */
/*   Updated: 2024/01/13 19:50:23 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int total, char **args)
{
	t_swap	*stack_a;
	t_swap	*stack_b;
	int		allocated;

	if (total < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	allocated = 0;
	if (total == 2)
	{
		args = ft_split(args[1], ' ');
		allocated = 1;
	}
	if (!args)
		send_error();
	handle_args(args, (total != 2), allocated);
	prepare_stack(&stack_a, args, (total != 2), allocated);
	start_sorting(&stack_a, &stack_b);
	return (0);
}
