/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domansou <domansou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:24:11 by domansou          #+#    #+#             */
/*   Updated: 2025/12/31 15:05:32 by domansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(long num)
{
	size_t	le;

	le = 0;
	if (num <= 0)
		le = 1;
	while (num != 0)
	{
		num = num / 10;
		le++;
	}
	return (le);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	size_t	len;

	len = 0;
	nb = n;
	len = length(nb);
	res = (char *)malloc(sizeof (char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		len--;
		res[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}
