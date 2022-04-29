/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:50:34 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/04 20:51:08 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_strcmp(const char *s1, const char *s2)
{
  size_t  n;

  n = 0;
  while ((s1[n] != '\0') && (s2[n] != '\0') &&
      ((unsigned char)s1[n] == (unsigned char)s2[n]))
  {
    n++;
  }
  if ((s1[n] == '\0') && (s2[n] == '\0'))
    return (0);
  else
    return ((unsigned char)s1[n] - (unsigned char)s2[n]);
}
