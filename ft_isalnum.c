/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domansou <domansou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:43:05 by domansou          #+#    #+#             */
/*   Updated: 2025/12/24 12:15:11 by domansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if ((uc >= 'a' && uc <= 'z') || (uc >= 'A' && uc <= 'Z')
		|| (uc >= '0' && uc <= '9'))
		return (1);
	return (0);
}
