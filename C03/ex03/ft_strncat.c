/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:50:31 by apaduan-          #+#    #+#             */
/*   Updated: 2020/12/03 21:06:33 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int end_i;
	unsigned int end_j;

	i = 0;
	end_i = 0;
	end_j = 0;
	while (src[end_i] != '\0')
		end_i++;
	while (dest[end_j] != '\0')
		end_j++;
	while ((i < end_i) && (i < nb))
	{
		dest[end_j] = src[i];
		end_j++;
		i++;
	}
	dest[end_j] = '\0';
	return (dest);
}
