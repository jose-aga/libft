/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-aga <jose-aga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:07:22 by jose-aga          #+#    #+#             */
/*   Updated: 2022/09/26 11:59:53 by jose-aga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	char	*p;
	int		i;

	i = 0;
	p = (char *)s;
	new_s = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new_s == NULL)
		return (NULL);
	while (p[i] != '\0')
	{
		new_s[i] = p[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
