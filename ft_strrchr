/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:13:04 by karai             #+#    #+#             */
/*   Updated: 2024/10/24 20:19:19 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	length;

	length = ft_strchr(s);
	while (length >= 0)
	{
		if (s[length] == (char)c)
		{
			return ((char *)&s[length]);
		}
		length -= 1;
	}
	return (NULL);
}
