/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:25:33 by apaduan-          #+#    #+#             */
/*   Updated: 2020/12/04 21:22:49 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argv, char **argc)
{
	int value;
	int argument;

	value = 0;
	argument = argv - 1;
	while (argc[argument][value] != '\0')
	{
		write(1, &argc[argument][value], 1);
		value++;
	}
	write(1, "\n", 1);
}
