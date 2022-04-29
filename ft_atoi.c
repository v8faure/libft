/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:53:23 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/14 22:56:38 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	minus;

	i = 0;
	num = 0;
	minus = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		minus = 1;
		i++;
	}
	if (str[i] == '+' && minus == 0)
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (int)str[i] - '0';
		i++;
	}
	if (minus == 1 && num != 0)
		return (-num);
	return (num);
}
