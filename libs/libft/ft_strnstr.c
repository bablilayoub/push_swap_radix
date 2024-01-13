/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:42:51 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:06:02 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	str_len;
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	str_len = ft_strlen(to_find);
	if (n == 0 || (str == NULL && to_find == NULL))
		return (NULL);
	while (str[i] && i + str_len <= n)
	{
		j = 0;
		while (j < str_len && str[i + j] == to_find[j])
			j++;
		if (j == str_len)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
