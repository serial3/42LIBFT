/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:57:23 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/10 16:21:33 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst + len - 1;
	s = (unsigned char *)src + len - 1;
	if ((uintptr_t)src <= (uintptr_t)dst && (uintptr_t)s < (uintptr_t)d)
	{
		while (len--)
			*d-- = *s--;
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
