/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:10:41 by karai             #+#    #+#             */
/*   Updated: 2024/10/27 14:40:12 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_alloc_len(const char *s1, int trim[256])
{
	size_t	alloc_len;
	size_t	i;

	alloc_len = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (trim[(int)s1[i] + 128])
			alloc_len += 1;
		i += 1;
	}
	return (alloc_len);
}

static void	ft_trim_set(const char *set, int trim[256])
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		trim[(int)set[i] + 128] = 1;
		i += 1;
	}
}

static void	ft_get_str(const char *s1, char *str, int trim[256])
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (trim[(int)s1[i] + 128] == 0)
		{
			str[j] = s1[i];
			j += 1;
		}
		i += 1;
	}
	str[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		trim[256];
	size_t	alloc_len;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	ft_bzero(trim, 256);
	ft_trim_set(set, trim);
	alloc_len = ft_alloc_len(s1, trim);
	str = (char *)malloc(alloc_len + 1);
	if (str == NULL)
		return (NULL);
	ft_get_str(s1, str, trim);
	return (str);
}
