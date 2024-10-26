/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:52:05 by karai             #+#    #+#             */
/*   Updated: 2024/10/25 21:21:28 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	judge(const char *str_part, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	while (str_part[i] != '\0' && to_find[i] != '\0' && i < len)
	{
		if (str_part[i] != to_find[i])
			return (0);
		i += 1;
	}
	if (to_find[i] == '\0' || i == len)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (little[i] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] != '\0')
	{
		if (judge(&big[i], little, len))
			return ((char *)&big[i]);
		i += 1;
	}
	return (NULL);
}
