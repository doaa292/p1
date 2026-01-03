/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domansou <domansou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:12:32 by domansou          #+#    #+#             */
/*   Updated: 2025/12/24 12:19:32 by domansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (dst == NULL || src == NULL)
		return (0);
	if (size == 0)
	{
		while (src[index])
			index++;
		return (index);
	}
	while (src[index] && index < (size - 1))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	while (src[index] != '\0')
		index++;
	return (index);
}
