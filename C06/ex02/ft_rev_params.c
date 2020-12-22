/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:25:43 by apaduan-          #+#    #+#             */
/*   Updated: 2020/12/05 00:04:05 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argv, char **argc)
{
	int value;
	int argum;

	value = 0;
	argum = argv - 1;
	while (argum > 0)
	{
		while (argc[argum][value] != '\0')
		{
			write(1, &argc[argum][value], 1);
			value++;
		}
		write(1, "\n", 1);
		value = 0;
		argum--;
	}
}
