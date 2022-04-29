/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:11:34 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/14 23:02:12 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_str(int num)
{
	int		i;

	i = 1;
	if (num == -2147483648)
		return (11);
	if (num < 0)
	{
		num= -num;
		i++;
	}
	while (num / 10 > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int num)
{
	char	*str;
	int		i;

	i = len_str(num);
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	str[i--] = '\0';
	while (num / 10 > 0)
	{
		str[i--] = (num % 10) + '0';
		num /= 10;
	}
	str[i] = (num % 10) + '0';
	return (str);
}
