/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 13:30:06 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 13:50:42 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[] = "Necrono";
	char src[] = "miconos";
	unsigned int size;
	
	size = 5;
	printf("%s \n", dest);
	printf("%s \n", src);
//	printf("%lu \n", strlcat(dest, src, size));
	printf("%u \n", ft_strlcat(dest, src, size));
	
	return (0);
}
