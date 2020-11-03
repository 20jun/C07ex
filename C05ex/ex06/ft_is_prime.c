/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:28:08 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 18:17:45 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	unsigned int i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while ((unsigned int)nb % i != 0)
	{
		if ((unsigned int)nb != i)
			i++;
		if ((unsigned int)nb == i)
			return (1);
	}
	return (0);
}
