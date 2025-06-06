/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:12:29 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 17:04:58 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t				i;
	unsigned char		*s;

	i = 0;
	s = (unsigned char *)ptr;
	while (i < n)
	{
		s[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char a[10];
	char b[10];
	int i = 0;
	int j = 0;
	
	memset(b, 1, sizeof(b));
	while (j < sizeof(b))
	{
		printf("%d ", b[j]);
		j++;
	}
	printf("\n");
	ft_memset(a, 1, sizeof(a));
	while (i < sizeof(a))
	{
		printf("%d ", a[i]);
		i++;
	}
}*/
