/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:18:04 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/15 11:36:45 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (str && f && *str)
	{
		i = 0;
		while (str[i])
		{
			(*f)(i, &str[i]);
			i++;
		}
	}
}
