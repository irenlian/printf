/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 08:46:55 by ilian             #+#    #+#             */
/*   Updated: 2018/11/10 20:49:03 by ilian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char const *str, size_t size)
{
	size_t i;

	i = 0;
	if (str)
	{
		while (i < size)
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
	}
}