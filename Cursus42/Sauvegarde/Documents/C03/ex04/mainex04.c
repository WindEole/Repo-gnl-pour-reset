/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:28:42 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 13:08:16 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "Bonjour, je cherche le jourdain.";
	char to_find[] = "jour";

	printf("%s \n", str);
	printf("%s \n", to_find);
//	printf("%s \n", strstr(str, to_find));
	printf("%s \n", ft_strstr(str, to_find));
	return (0);
}
