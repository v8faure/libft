/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:01:28 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/15 11:31:29 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*tmp;

	i = ft_strlen(str) + 1;
	tmp = (char *)str;
	while (i--)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
	}
	return (0);
}
