/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:51:11 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/15 10:50:27 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*str1;

	if (str == 0 || f == 0)
		return (0);
	j = ft_strlen(str);
	str1 = (char *)malloc(sizeof(char) * (j + 1));
	if (!str1)
		return (0);
	i = 0;
	while (i < j)
	{
		str1[i] = (*f)(i, str[i]);
		i++;
	}
	str1[i] = 0;
	return (str1);
}
