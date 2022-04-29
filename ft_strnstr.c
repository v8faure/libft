/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:14:38 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/15 10:56:28 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *set, size_t i)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = ft_strlen(set);
	if (k == 0)
		return ((char *)str);
	while (j < i && str[j])
	{
		if (str[j] == set[0])
		{
			if (ft_strncmp(str + j, set, k) == 0)
				if (j + k <= i)
					return ((char *)str + j);
		}
		j++;
	}
	return (0);
}
