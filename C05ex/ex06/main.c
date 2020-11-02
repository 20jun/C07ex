/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle </var/mail/youngjle>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:23:29 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 00:57:37 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	int nb;

	nb = 2;

	while (nb < 131231)
	{
	printf("nb : %d, result : %d\n", nb, ft_is_prime(nb));
	nb++;
	}
}
