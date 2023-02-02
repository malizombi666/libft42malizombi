/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:13:17 by manaveti          #+#    #+#             */
/*   Updated: 2023/02/01 17:13:36 by manaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;
	size_t	bytes;
	void	*b;

	bytes = count * size;
	buffer = malloc(bytes);
	if (size >= SIZE_MAX)
		return (0);
	if (buffer != '\0')
	{
		b = buffer;
		while (bytes--)
			*(buffer++) = '\0';
		return (b);
	}
	return (0);
}
