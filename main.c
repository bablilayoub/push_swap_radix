/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:09:33 by abablil           #+#    #+#             */
/*   Updated: 2024/01/13 20:17:52 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int total, char **args)
{
	t_swap	*stack_a;
	t_swap	*stack_b;

	if (total < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	args = handle_args(args);
	prepare_stack(&stack_a, args);
	start_sorting(&stack_a, &stack_b);
	return (0);
}
