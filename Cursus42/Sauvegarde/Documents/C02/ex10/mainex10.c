/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 11:56:02 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/23 11:23:43 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest [] = "Necrono";
	char src [] = "micon";
	char *test1 = "Necrono";
	char *test2 = "micon";
	unsigned int size = 4;

	printf("%u \n", ft_strlcpy(dest, src, size));
	printf("%lu", strlcpy(test1, test2, 8));
	return (0);
}

