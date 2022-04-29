/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:02:28 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/14 23:05:16 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t i)
{
	char	*ptr;

	ptr = (char *)str;
	while (i-- > 0)
	{
		if (*ptr++ == (char)c)
			return ((char *)(ptr - 1));
	}
	return (0);
}
