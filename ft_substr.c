/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:16:50 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/15 11:22:31 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (str == NULL)
		return (NULL);
	if (ft_strlen(str) <= start)
		return (ft_strdup(""));
	if ((ft_strlen(str)) < (start + len))
		len = ft_strlen(str) - start;
	res = (char *)malloc((sizeof(char) * (len + 1)));
	if (!res)
		return (0);
	j = 0;
	if (ft_strlen((char *)str) > start)
	{
		i = start;
		while (str[i] && j < len)
			res[j++] = str[i++];
		res[j] = '\0';
		return (res);
	}
	res[j] = '\0';
	return (res);
}
