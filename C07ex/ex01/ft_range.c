/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:08:06 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 22:45:57 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *ptr;
	int *arr;

	arr = NULL;
	ptr = NULL;

	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	ptr = (int *)malloc(sizeof(int) * i + 1);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	printf("ptr[0] = %d\n", ptr[3]);
	return (ptr);
}
