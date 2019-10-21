/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:12:11 by djoye             #+#    #+#             */
/*   Updated: 2019/09/12 11:12:15 by djoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*arr;

	if (!*s && !s)
		return (NULL);
	arr = (char*)s;
	while (*arr != c)
	{
		if (*arr == '\0')
		{
			return (NULL);
		}
		arr++;
	}
	return (arr);
}
