/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:33:32 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/02 20:41:09 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int nb;
	int power;

	nb = 3;
	power = 2;
	printf("result : %d\n", ft_recursive_power(nb, power));
}
