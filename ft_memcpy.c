/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:51:33 by karai             #+#    #+#             */
/*   Updated: 2024/10/25 20:55:36 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*us_dest;
	unsigned char	*us_src;

	us_dest = (unsigned char *)dest;
	us_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		us_dest[i] = us_src[i];
		i += 1;
	}
	return (dest);
}
