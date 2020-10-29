/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 23:22:26 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 23:31:16 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "abcd";
	char to_find[] = "ab";

	printf("str[] : %s, to_find[] : %s\n", str, to_find);
	printf("result : %c\n", *str);
}
