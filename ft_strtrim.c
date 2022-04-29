/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 13:09:38 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/15 11:19:57 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] && ft_strchr(set, (int)str[i]))
		i++;
	j = ft_strlen(str);
	while ((j - i) && ft_strchr(set, (int)str[j]))
		j--;
	return (ft_substr(str, i, j - i + 1));
}
