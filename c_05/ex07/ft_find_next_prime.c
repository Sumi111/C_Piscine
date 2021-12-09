/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:36:22 by sfathima          #+#    #+#             */
/*   Updated: 2021/07/09 15:37:39 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int nbr;

	nbr = 2;
	if (nb == 2147483647)
		return (1);
	while ((nbr <= nb / 2))
	{
		if (nb % nbr == 0)
			return (nb);
		nbr++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int result;

	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
