/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:03:35 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 22:44:23 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int min;
	int max;
	int i = 10;

	min = 2;
	max = 10;
	printf("min = %d, max = %d\n", min, max);
	ft_range(min, max);
	//while (i > 0)
	//{
	//printf("result : %d\n", *ft_range(min, max));
	//i--;
	//}
}
