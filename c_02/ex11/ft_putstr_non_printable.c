/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 19:01:20 by sfathima          #+#    #+#             */
/*   Updated: 2021/07/02 19:54:26 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_hex(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		print_hex(np / 10);
		print_hex(np % 10);
	}
	else
		ft_putchar(hex[np]);
}

void		ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < ' ' && str[i] >= '\0') || str[i] > '~')
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i += 1;
	}
}
