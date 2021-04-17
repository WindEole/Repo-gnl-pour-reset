/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 13:29:50 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 15:42:44 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		i++;
	}
	j = 0;
	if (i == size)
	{
		dest[i] = '\0';
		return (i);
	}
	if (i > size)
		return (0);
	return (0);
}	
