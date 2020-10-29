/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:40:11 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 20:17:59 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[] = "abdd";
	char s2[] = "abdd";

	printf("s1 : %s, s2 : %s\n", s1, s2);
	ft_strcmp(s1, s2);
	printf("result : %d\n", ft_strcmp(s1, s2));
}
