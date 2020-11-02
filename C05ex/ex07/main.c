/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle </var/mail/youngjle>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:58:25 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 00:59:52 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int nb;

	nb = 5;
	printf("result : %d\n", ft_find_next_prime(nb));
}
