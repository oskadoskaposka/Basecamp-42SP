/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:50:34 by apaduan-          #+#    #+#             */
/*   Updated: 2020/12/03 18:53:17 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int end_i;
	int end_j;

	i = 0;
	end_i = 0;
	end_j = 0;
	while (src[end_i] != '\0')
		end_i++;
	while (dest[end_j] != '\0')
		end_j++;
	while (i < end_i)
	{
		dest[end_j] = src[i];
		end_j++;
		i++;
	}
	dest[end_j] = '\0';
	return (dest);
}
