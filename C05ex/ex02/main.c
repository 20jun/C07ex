/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:14:03 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/02 20:34:29 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int nb;
	int power;

	nb = 2;
	power = 2;
	printf("result : %d\n", ft_iterative_power(nb, power));
}
