/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:55:35 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/25 16:25:49 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] <= 31 || base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strlen(base) <= 1)
		return ;
	else if (check_base(base) == 0)
		return ;
	else if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base(nbr / (ft_strlen(base)), base);
		ft_putnbr_base(nbr % (ft_strlen(base)), base);
	}
	else
		write(1, base + nbr, 1);
}
