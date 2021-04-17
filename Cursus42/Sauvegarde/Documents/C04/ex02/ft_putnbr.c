/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:17:05 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 18:26:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	i;
	int			a;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i > 0)
	{
		a = i % 10 + 48;
		i = i / 10;
		if (i > 0)
		{
			ft_putnbr(i);
		}
		ft_putchar(a);
	}
}
