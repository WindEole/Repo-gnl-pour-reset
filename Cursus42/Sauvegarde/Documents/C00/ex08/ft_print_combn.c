/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <iderighe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:04:38 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/16 14:00:33 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int in)
{
	write(1, &in, 1);
}

void	ft_print_combn(int n)
{
	int in;

	if (n < 1 || n > 9)
	{
		write(1, &"n doit etre compris entre 1 et 9.\n", 34);
	}
	else
	{
		if (n > 0 && n <= 9)
		{
			in = 0;
			while (in <= 9)
			{
				ft_putchar(in);
				in = in + 1;
			}
			n = n - 1;
			ft_print_combn(n);
		}
	}
}
