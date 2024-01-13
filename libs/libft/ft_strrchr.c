/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:06:37 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:06:05 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*new_str;

	new_str = (char *)s;
	i = ft_strlen(new_str);
	while (new_str[i] != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return (new_str + i);
}
