/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:45:48 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 00:21:53 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int i;
	unsigned int sqrt;

	i = 0;
	sqrt = 0;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);

	while ((i * i) <= (unsigned int)nb)
		i++;
	i--;
	sqrt = i * i;
	if (sqrt == (unsigned int)nb)
		return (i);
	else
		return (0);
}
