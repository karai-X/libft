/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:45:48 by karai             #+#    #+#             */
/*   Updated: 2024/10/26 22:10:18 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_divide(char const *str, char c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (str[i] != '\0' && str[i] == c)
		i += 1;
	while (str[i] != '\0')
	{
		if (size == 0 || str[i] != c && str[i - 1] == c)
			size += 1;
		i += 1;
	}
	return (size + 1);
}

static void	malloc_part(char **ret_str_i, char *str, char c)
{
	int	j;
	int	size;

	size = 0;
	while (str[size] != '\0' && str[size] != c)
		size += 1;
	*ret_str_i = (char *)malloc(sizeof(char) * (size + 1));
	if (*ret_str_i == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0' && str[j] != c)
	{
		(*ret_str_i)[j] = str[j];
		j += 1;
	}
	(*ret_str_i)[j] = '\0';
}

static char	**free_2dim(char **ret_str, size_t i)
{
	while (i > 0)
	{
		free(ret_str[i]);
		i -= 1;
	}
	free(ret_str);
	return (NULL);
}

static char	**ft_split_part(char **ret_str, char c, char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[j] != '\0' && str[i] == c)
		j++;
	while (str[j] != '\0')
	{
		if (i == 0 || (str[j] != c && str[j] == c))
		{
			malloc_part(&ret_str[i], &str[j], c);
			if (ret_str[i] == NULL)
				return (free_2dim(**ret_str, i));
		}
		j += 1;
	}
	return (ret_str);
}

char	**ft_split(char const *str, char c)
{
	size_t	size_2dim;
	char	**ret_str;
	char	*last;

	size_2dim = size_divide(str, c);
	ret_str = (char **)malloc(sizeof(char *) * size_2dim);
	if (ret_str == NULL)
		return (NULL);
	ret_str = ft_split_part(ret_str, c, str);
	if (ret_str == NULL)
		return (NULL);
	ret_str[size_2dim - 1] = (char *)malloc(sizeof(char));
	if (ret_str[size_2dim - 1] == NULL)
		return (free_2dim(ret_str, size_2dim - 1));
	ret_str[size_2dim - 1] = NULL;
	return (ret_str);
}
