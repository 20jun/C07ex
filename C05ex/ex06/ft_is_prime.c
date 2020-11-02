/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle </var/mail/youngjle>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:25:31 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 00:57:29 by youngjle         ###   ########.fr       */
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
