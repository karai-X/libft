/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:09:54 by karai             #+#    #+#             */
/*   Updated: 2024/10/27 15:12:48 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_minus(long *nb, int fd)
{
	if (*nb < 0)
	{
		*nb = -*nb;
		write(fd, "-", 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		div;
	int		tmp;
	char	num_char;
	long	nb_long;

	nb_long = (long)n;
	ft_putnbr_minus(&nb_long, fd);
	div = 1;
	tmp = nb_long;
	while (tmp / 10 != 0)
	{
		div *= 10;
		tmp = tmp / 10;
	}
	while (div != 0)
	{
		num_char = '0' + (nb_long / div % 10);
		write(fd, &num_char, 1);
		div = div / 10;
	}
}