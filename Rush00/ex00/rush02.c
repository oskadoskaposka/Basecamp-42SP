/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:31:10 by apaduan-          #+#    #+#             */
/*   Updated: 2020/11/23 04:11:50 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char letter);

int	write_line(char l1, char l2, char l3, int x)
{
	int count_x;

	count_x = 1;
	if (x > 0)
	{
		ft_putchar(l1);
		count_x++;
	}
	while (count_x < x)
	{
		ft_putchar(l2);
		count_x++;
	}
	if (count_x == x)
	{
		ft_putchar(l3);
	}
	ft_putchar('\n');
	return (0);
}

int	rush(int x, int y)
{
	int count_y;

	count_y = 1;
	if (y > 0)
	{
		write_line('A', 'B', 'A', x);
		count_y++;
	}
	while (count_y < y)
	{
		write_line('B', ' ', 'B', x);
		count_y++;
	}
	if (count_y == y)
	{
		write_line('C', 'B', 'C', x);
	}
	return (0);
}



