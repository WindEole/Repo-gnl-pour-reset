/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:27:04 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/22 11:54:28 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	j = 0;
	while (str[j] != '\0')
	{
		if (j == 0)
			str[j] = str[j] - 32;
		if (str[j] > 96 && str[j - 1] < 47)
			str[j] = str[j] - 32;
		j++;
	}
	return (str);
}
