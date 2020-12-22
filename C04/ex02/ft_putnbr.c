/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:29:06 by apaduan-          #+#    #+#             */
/*   Updated: 2020/12/04 16:35:53 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	i;
	int			printar;

	i = nb;
	if (i < 0)
	{
		write(1, "-", 1);
		i *= -1;
	}
	if (i < 10)
	{
		printar = i + 48;
		write(1, &printar, 1);
		return ;
	}
	else
		ft_putnbr(i / 10);
	ft_putnbr(i % 10);
}
