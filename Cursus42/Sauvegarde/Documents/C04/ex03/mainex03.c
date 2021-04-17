/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:28:52 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 19:22:19 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char str[] = "---+++43 ans !";
	
//	atoi(str);
//	printf("%i \n", atoi(str));
	printf("%i \n", ft_atoi(str));
	
	return (0);
}
