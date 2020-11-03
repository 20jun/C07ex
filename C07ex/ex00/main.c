/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:27:47 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 22:02:04 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char src[] = "abc";
	printf("src : %s, %p\n", src, src);
	printf("result : %s, %p\n", ft_strdup(src), ft_strdup(src));
}
