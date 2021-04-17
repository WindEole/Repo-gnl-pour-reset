/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:58:15 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/23 18:42:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[] = "Bonjour.";
	char s2[] = "Bonjour, tout le monde !";

	printf("%d \n", strcmp(s1, s2));
	printf("%d \n", ft_strcmp(s1, s2));
	return (0);
}
