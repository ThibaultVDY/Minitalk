/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-monn <tle-monn@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:39:06 by tle-monn          #+#    #+#             */
/*   Updated: 2023/07/17 13:39:09 by tle-monn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_length(char const *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

char	*ft_strdup(char const *src)
{
	char	*dest;
	char	*buffer;

	buffer = (char *)malloc(sizeof(*src) * str_length(src) + 1);
	if (!buffer)
		return (0);
	dest = buffer;
	while (*src)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}
