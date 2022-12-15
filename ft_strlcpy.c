/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-aga <jose-aga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:53:20 by jose-aga          #+#    #+#             */
/*   Updated: 2022/09/22 13:49:32 by jose-aga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t ds)
{
	size_t	i;

	i = 0;
	if (ds > 0)
	{
		while (src[i] && i < (ds -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}	
	while (src[i])
		i++;
	return (i);
}
