/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domansou <domansou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 12:20:31 by domansou          #+#    #+#             */
/*   Updated: 2025/12/27 12:49:17 by domansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*p2;
	void			*p1;
	size_t			i;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	p1 = malloc(n * size);
	if (!p1)
		return (NULL);
	p2 = (unsigned char *)p1;
	i = 0;
	while (i < n * size)
	{
		p2[i] = 0;
		i++;
	}
	return (p1);
}
