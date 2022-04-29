/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:20:01 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/15 10:50:45 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (str1 == 0 || str2 == 0)
		return (0);
	k = 0;
	i = ft_strlen(str1);
	j = ft_strlen(str2);
	str = (char *)malloc((i + j + 1) * sizeof(char));
	if (!str)
		return (0);
	while (i--)
	{
		str[k] = *str1++;
		k++;
	}
	while (j--)
	{
		str[k] = *str2++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
