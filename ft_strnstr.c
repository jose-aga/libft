/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-aga <jose-aga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:50:25 by jose-aga          #+#    #+#             */
/*   Updated: 2022/09/25 20:01:46 by jose-aga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llittle;

	if (*little == '\0')
		return ((char *)big);
	llittle = ft_strlen(little);
	while (*big != '\0' && len-- >= llittle)
	{
		if (*big == *little && ft_memcmp(big, little, llittle) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
