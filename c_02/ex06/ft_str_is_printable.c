/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:05:50 by sfathima          #+#    #+#             */
/*   Updated: 2021/06/29 14:23:07 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ') && (str[i] <= '~'))
		{
			temp = 1;
		}
		else
			return (0);
		i++;
	}
	return (temp);
}
