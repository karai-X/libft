/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:59:36 by karai             #+#    #+#             */
/*   Updated: 2024/10/27 14:46:07 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digit_len(int n)
{
	size_t	digit_len;

	digit_len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digit_len += 1;
		n *= -1;
	}
	while (n != 0)
	{
		digit_len += 1;
		n /= 10;
	}
	return (digit_len);
}

char	*ft_itoa(int n)
{
	size_t	digit_len;
	char	*str;

	digit_len = ft_digit_len(n);
	str = (char *)malloc(sizeof(char) * (digit_len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[digit_len] = '\0';
	digit_len -= 1;
	while (n != 0)
	{
		str[digit_len] = '0' + (n % 10);
		digit_len -= 1;
		n /= 10;
	}
	return (str);
}
