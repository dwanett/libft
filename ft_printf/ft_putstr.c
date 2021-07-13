/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwanetta <dwanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:34:32 by dwanetta          #+#    #+#             */
/*   Updated: 2021/07/13 20:31:22 by dwanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int flag)
{
	int	i;
	int	return_value;

	return_value = 0;
	i = 0;
	if (flag == -1)
	{
		while (s[i] != '\0')
		{
			return_value += ft_putchar(s[i]);
			i++;
		}
	}
	else
	{
		while (i != flag)
		{
			return_value += ft_putchar(s[i]);
			i++;
		}
	}
	return (return_value);
}
