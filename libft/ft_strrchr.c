/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:06:15 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/10 16:40:48 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = ((char *)s);
		s++;
	}
	if (c == '\0' && *s == '\0')
		p = ((char *)s);
	return (p);
}

/* int	main (void)
{
	const char *g = "carlos loples";

	printf("%s \n", ft_strrchr(g, 'l'));
} */