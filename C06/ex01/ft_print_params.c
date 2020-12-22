/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:25:39 by apaduan-          #+#    #+#             */
/*   Updated: 2020/12/04 21:58:25 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argv, char **argc)
{
	int value;
	int argumen;

	value = 0;
	argumen = 1;
	while (argumen < argv)
	{
		while (argc[argumen][value] != '\0')
		{
			write(1, &argc[argumen][value], 1);
			value++;
		}
		value = 0;
		write(1, "\n", 1);
		argumen++;
	}
}
