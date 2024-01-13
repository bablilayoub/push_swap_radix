/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:24:36 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:05:30 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	str_len;
	char	*new_str;

	str_len = ft_strlen(s1);
	new_str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, str_len + 1);
	return (new_str);
}
