/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-aga <jose-aga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:24:34 by jose-aga          #+#    #+#             */
/*   Updated: 2022/09/23 13:09:24 by jose-aga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*pzero;	

	pzero = s;
	while (n != 0)
	{
		*pzero++ = 0;
		n--;
	}
}