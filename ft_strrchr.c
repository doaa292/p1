/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domansou <domansou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:34:19 by domansou          #+#    #+#             */
/*   Updated: 2025/12/24 12:19:04 by domansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = s;
	while (*end != '\0')
	{
		end++;
	}
	if ((char)c == '\0')
		return ((char *)end);
	while (end >= s)
	{
		if (*end == (char)c)
			return ((char *) end);
		end--;
	}
	return (NULL);
}
