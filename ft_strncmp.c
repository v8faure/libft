/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:16:44 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/15 10:52:25 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t i)

{
	while (i-- > 0)
	{
		if (*str1 == '\0' && *str2 == '\0')
			return (0);
		if (*str1 != *str2)
			return (*((unsigned char *)str1) - *((unsigned char *)str2));
		str1++;
		str2++;
	}
	return (0);
}
