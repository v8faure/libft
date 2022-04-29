/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:35:10 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/14 23:42:22 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*tmp;
	int		i;

	i = ft_strlen(str);
	tmp = (char *)malloc(i + 1);
	if (!tmp)
		return (0);
	ft_memcpy(tmp, str, i);
	tmp[i] = '\0';
	return (tmp);
}
