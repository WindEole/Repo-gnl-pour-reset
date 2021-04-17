/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex11.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:30:26 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/23 17:48:14 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char str[] = "Coucou !\nTu vas bien ?\n";

	printf("%s \n", str);
	ft_putstr_non_printable(str);
	return (0);
}
