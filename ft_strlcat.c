/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domansou <domansou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:27:36 by domansou          #+#    #+#             */
/*   Updated: 2025/12/24 12:19:18 by domansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l1;
	size_t	l2;

	i = 0;
	l1 = 0;
	l2 = 0;
	while (dst[l1] != '\0' && l1 < size)
		l1++;
	while (src[l2] != '\0')
		l2++;
	if (l1 == size)
		return (l1 + l2);
	while (src[i] != '\0' && (l1 + i) < (size - 1))
	{
		dst[l1 + i] = src[i];
		i++;
	}
	if (l1 + i < size)
		dst[l1 + i] = '\0';
	return (l1 + l2);
}
