/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domansou <domansou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:21:20 by domansou          #+#    #+#             */
/*   Updated: 2025/12/24 12:18:50 by domansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (*str1 || *str2))
	{
		if ((unsigned char)*str1 != (unsigned char)*str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		i++;
		str1++;
		str2++;
	}
	return (0);
}
