/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:49:51 by sfathima          #+#    #+#             */
/*   Updated: 2021/07/07 13:53:44 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0) && (power == 0))
		return (1);
	else if (power < 0)
		return (0);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
