/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:44:51 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/23 13:50:20 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
int		main()
{
	char str[] = "you\0pi";
	printf("str is %d\n", ft_strlen(str));
	return 0;
}
