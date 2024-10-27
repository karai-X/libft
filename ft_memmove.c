/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:51:48 by karai             #+#    #+#             */
/*   Updated: 2024/10/27 13:58:30 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*uc_dest;
	unsigned char	*uc_src;
	size_t			i;

	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		uc_dest[i] = uc_src[i];
		i += 1;
	}
	return (dest);
}
