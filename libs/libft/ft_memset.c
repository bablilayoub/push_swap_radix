/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:04:56 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:04:58 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*new_str;
	size_t			i;

	new_str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		new_str[i] = c;
		i++;
	}
	return (b);
}
