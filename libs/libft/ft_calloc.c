/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:22:59 by abablil           #+#    #+#             */
/*   Updated: 2023/11/16 12:43:25 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new_str;

	new_str = (void *)malloc(count * size);
	if (new_str != NULL)
		ft_memset(new_str, 0, count * size);
	return (new_str);
}
