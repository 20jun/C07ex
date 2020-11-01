/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:07:05 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/01 02:09:17 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[] = "abcde";
	char src[] = "efghi";

	printf("dest[] : %s, src[] : %s\n", dest, src);
	printf("result : %s\n", ft_strcat(dest, src));
}
