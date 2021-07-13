/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwanetta <dwanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 17:00:31 by dwanetta          #+#    #+#             */
/*   Updated: 2021/07/13 20:38:37 by dwanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(char fmt, unsigned int u_dec, char **hex)
{
	char			*str;
	unsigned int	tmp;
	int				i;
	int				j;

	i = 1;
	if (fmt == 'x')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	tmp = u_dec;
	while (tmp > 15 && i++)
		tmp /= 16;
	*hex = (char *)malloc(sizeof(char) * i + 1);
	if (*hex != NULL)
	{
		hex[0][i] = '\0';
		while (i != 0)
		{
			i--;
			j = (int)(u_dec - (16 * (u_dec / 16)));
			u_dec /= 16;
			hex[0][i] = str[j];
		}
	}
}

void	ft_puthex_pointer(unsigned long long int ull_dec, char **hex)
{
	char					*str;
	unsigned long long int	tmp;
	int						i;
	int						j;

	i = 1;
	str = "0123456789abcdef";
	tmp = ull_dec;
	while (tmp > 15)
	{
		tmp /= 16;
		i++;
	}
	*hex = (char *)malloc(sizeof(char) * i + 1);
	if (*hex != NULL)
	{
		hex[0][i] = '\0';
		while (i != 0)
		{
			i--;
			j = (int)(ull_dec - (16 * (ull_dec / 16)));
			ull_dec /= 16;
			hex[0][i] = str[j];
		}
	}
}
