/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:50:53 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/23 13:51:30 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		write(1, "\n", 1);
		i++;
	}
}
int main(void)
{
	char str[] = "IIIIIIIIIIII";
	ft_putstr(str);
	return 0;
}
