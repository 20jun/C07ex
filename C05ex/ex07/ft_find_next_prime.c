/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 01:01:18 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 11:29:35 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	unsigned int i;
	unsigned int temp;

	i = 2;
	temp = 0;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while ((unsigned int)nb % i != 0)
	{
		if ((unsigned int)nb != i)
			i++;
		if ((unsigned int)nb == i)
			return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}
