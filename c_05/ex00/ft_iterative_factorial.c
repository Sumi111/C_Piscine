/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:04:19 by sfathima          #+#    #+#             */
/*   Updated: 2021/07/06 19:18:53 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int ans;

	ans = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ans = ans * nb;
		nb--;
	}
	return (ans);
}
