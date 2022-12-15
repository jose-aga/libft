/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-aga <jose-aga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:09:48 by jose-aga          #+#    #+#             */
/*   Updated: 2022/09/26 09:59:47 by jose-aga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	len_new;

	if (!s)
		return (NULL);
	len_new = ft_strlen(s);
	if (s == NULL || len_new <= start)
		return (ft_strdup(""));
	if (start + len < len_new)
		new = (char *)malloc(sizeof(char) * (len + 1));
	else
		new = (char *)malloc(sizeof(char) * (len_new - start + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
