/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:38:33 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:05:36 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		total_length;
	char	*result;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	total_length = ft_strlen(str1) + ft_strlen(str2) + 1;
	result = (char *)malloc(sizeof(char) * total_length);
	if (!result)
		return (NULL);
	ft_strlcpy(result, str1, total_length);
	ft_strlcat(result, str2, total_length);
	return (result);
}
