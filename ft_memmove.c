/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:51:48 by karai             #+#    #+#             */
/*   Updated: 2024/10/27 16:32:25 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*uc_dest;
	unsigned char	*uc_src;
	size_t			i;

	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	if (uc_dest <= uc_src)
	{
		i = 0;
		while (i < n)
		{
			uc_dest[i] = uc_src[i];
			i += 1;
		}
	}
	else
	{
		while (n > 0)
		{
			uc_dest[n - 1] = uc_src[n - 1];
			n -= 1;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	ft_memmove(sResult + 1, sResult, 2);
// 	write(1, sResult, 7);
// }
