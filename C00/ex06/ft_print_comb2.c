/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:47:09 by apaduan-          #+#    #+#             */
/*   Updated: 2020/11/25 17:33:35 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_one_comb(int alg1, int alg2, int alg3, int alg4)
{
	write(1, &alg3, 1);
	write(1, &alg4, 1);
	write(1, " ", 1);
	write(1, &alg1, 1);
	write(1, &alg2, 1);
	write(1, ", ", 2);
}

void	write_full_comb(int alg1, int alg2, int alg3, int alg4)
{
	while (alg3 < '4')
	{
		while (alg4 < ':')
		{
			while (alg1 < ':')
			{
				while (alg2 < ':')
				{
					write_one_comb(alg1, alg2, alg3, alg4);
					alg2++;
				}
				alg1++;
				alg2 = '0';
			}
			alg4++;
			alg1 = '0';
			alg2 = alg4 + 1;
		}
		alg3++;
		alg4 = '0';
		//alg1 = '0';
		alg2 = alg4 + 1;
	}
}

void	ft_print_comb2(void)
{
	int	p1;
	int p2;
	int s1;
	int s2;

	p1 = '0';
	p2 = '1';
	s1 = '0';
	s2 = '0';
	write_full_comb(p1, p2, s1, s2);
	write(1, "\n", 1);
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
