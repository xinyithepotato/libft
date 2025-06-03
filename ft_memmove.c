/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:43:41 by xinlim            #+#    #+#             */
/*   Updated: 2025/05/25 23:34:17 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (0);
	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str1[22] = "Learningisfun";
	char str2[22] = "Learningisfun";

	printf("Original string : %s\n", str1);

	memmove(str1, str1, 7);
	printf("memmove overlap : %s\n", str1);

	ft_memmove(str2, str2, 7);
	printf("ft_memmove      : %s\n", str2);
}*/
