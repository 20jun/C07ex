/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:56:15 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/01 02:10:00 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[] = "abcd";
	char src[] = "efgh";
	unsigned int nb;

	nb = 1;
	printf("dest[] : %s, src[] : %s, nb : %d\n", dest, src, nb);
	printf("result : %s\n", ft_strncat(dest, src, nb));
}
