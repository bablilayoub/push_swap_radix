/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:03:07 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:05:26 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = (char *)s;
	while (new_str[i] != (char)c)
	{
		if (new_str[i] == '\0')
			return (NULL);
		i++;
	}
	return (new_str + i);
}
