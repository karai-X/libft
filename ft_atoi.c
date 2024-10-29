/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:17:16 by karai             #+#    #+#             */
/*   Updated: 2024/10/28 22:40:25 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	ans;
	int	pm;

	i = 0;
	ans = 0;
	pm = 1;
	while (nptr[i] == '\f' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == ' ')
		i += 1;
	if (nptr[i] == '-')
		pm = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i += 1;
	while (nptr[i] <= '9' && nptr[i] >= '0' )
	{
		ans = ans * 10 + (nptr[i] - '0');
		i += 1;
	}
	return (ans * pm);
}

// #include <limits.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", INT_MIN);
// 	char *a = "-2147483649";
// 	printf("%d\n", ft_atoi(a));
// 	printf("%d\n", atoi(a));
// 	char *n = "\t\v\f\r\n \f-06050";
// 	printf("%d\n", ft_atoi(n));
// 	printf("%d\n", atoi(n));
// }
