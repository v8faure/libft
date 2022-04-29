/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:47:29 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/14 22:49:21 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	size_t		i;

	i = count * size;
	ptr = malloc(i);
	if (NULL == ptr)
		return (0);
	ft_memset(ptr, 0, i);
	return (ptr);
}
