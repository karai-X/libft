/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:33:50 by karai             #+#    #+#             */
/*   Updated: 2024/10/25 19:55:59 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	src_len;
	char	*ptr;
	size_t	alloc_len;

	src_len = ft_strlen(s);
	if (src_len <= start || len == 0)
		retrun(ft_strdup(""));
	if (src_len <= start + len)
		alloc_len = src_len - start;
	else
		alloc_len = len;
	ptr = malloc(sizeof(char) * (alloc_len + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, &s[start], alloc_len + 1);
}