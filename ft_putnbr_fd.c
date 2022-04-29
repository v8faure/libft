/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:01:57 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/15 11:40:37 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_razryad(int num)
{
	int	razryad;

	razryad = 0;
	while (num > 9)
	{
		num /= 10;
		razryad++;
	}
	return (razryad);
}

int	ft_square(int razryad)
{
	int	result;

	result = 1;
	while (razryad != 0)
	{
		result *= 10;
		razryad--;
	}
	return (result);
}

void	ft_putnbr_fd(int num, int fd)
{
	int	razryad;
	int	tmp;

	if (num == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	razryad = ft_razryad(num);
	while (razryad >= 0)
	{
		tmp = num / ft_square(razryad);
		ft_putchar_fd('0' + tmp, fd);
		num = num % ft_square(razryad);
		razryad--;
	}
}
