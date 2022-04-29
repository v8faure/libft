/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:56:09 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/14 23:15:18 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t i)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (!i || dst == src)
		return (dst);
	ptr_dst = (unsigned char *) dst;
	ptr_src = (unsigned char *) src;
	while (i > 0)
	{
		ptr_dst[i - 1] = ptr_src[i - 1];
		i--;
	}
	return (dst);
}
