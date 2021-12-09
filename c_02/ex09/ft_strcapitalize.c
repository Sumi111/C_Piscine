/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:08:46 by sfathima          #+#    #+#             */
/*   Updated: 2021/07/02 17:14:26 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_lower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_first(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 32;
			break ;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_lower(str);
	ft_first(str);
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ') && (str[i] <= '/'))
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
				str[i + 1] -= 32;
		}
		else if ((str[i] >= ':') && (str[i] <= '@'))
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
