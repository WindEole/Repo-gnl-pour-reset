/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:33:39 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 09:21:55 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hex(char str)
{
	char	*tab;
	int		mod;
	int		div;

	tab = "0123456789abcdef";
	div = str / 16;
	mod = str % 16;
	ft_putchar('\\');
	ft_putchar(tab[div]);
	ft_putchar(tab[mod]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_dec_to_hex(str[i]);
		}
		i++;
	}
}
