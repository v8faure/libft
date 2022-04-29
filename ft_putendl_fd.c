/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:00:29 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/14 23:23:57 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	size_t	i;

	if (str  && *str)
	{
		i = 0;
		while (str[i])
		{
			write(fd, &str[i], 1);
			i++;
		}
	}
	write(fd, "\n", 1);
}
