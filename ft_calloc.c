/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:14:52 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/04 01:14:52 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
    size_t	total;
	size_t	i;
	unsigned char	*ptr;

	total = nitems * size;
	if (nitems == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(total);
	if (!ptr)
		return (0);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}